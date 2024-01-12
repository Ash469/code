import cv2
import numpy as np

def region_of_interest(img, vertices):
    mask = np.zeros_like(img)
    cv2.fillPoly(mask, vertices, 255)
    masked_img = cv2.bitwise_and(img, mask)
    return masked_img

def draw_lines(img, lines, color=(0, 255, 0), thickness=8):
    left_lines = []
    right_lines = []

    for line in lines:
        for x1, y1, x2, y2 in line:
            slope = (y2 - y1) / (x2 - x1)
            if slope < 0:
                left_lines.append(line)
            else:
                right_lines.append(line)

    if left_lines:
        left_lines = np.average(left_lines, axis=0)
        x1, y1, x2, y2 = left_lines[0]
        cv2.line(img, (int(x1), int(y1)), (int(x2), int(y2)), color, thickness)

    if right_lines:
        right_lines = np.average(right_lines, axis=0)
        x1, y1, x2, y2 = right_lines[0]
        cv2.line(img, (int(x1), int(y1)), (int(x2), int(y2)), color, thickness)

def process_image(image):
    # Convert the image to grayscale
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

    # Apply Gaussian blur
    blur = cv2.GaussianBlur(gray, (5, 5), 0)

    # Apply Canny edge detection
    edges = cv2.Canny(blur, 50, 150)

    # Define region of interest (ROI)
    height, width = image.shape[:2]
    roi_vertices = np.array([[(50, height), (width / 2 - 50, height / 2 + 50),
                              (width / 2 + 50, height / 2 + 50), (width - 50, height)]], dtype=np.int32)
    roi_edges = region_of_interest(edges, roi_vertices)

    # Apply Hough Transform to find lines
    lines = cv2.HoughLinesP(roi_edges, 1, np.pi/180, threshold=50, minLineLength=100, maxLineGap=50)

    # Draw lanes
    lane_img = np.zeros((height, width, 3), dtype=np.uint8)
    draw_lines(lane_img, lines)

    # Combine the lane image with the original image
    result = cv2.addWeighted(image, 0.8, lane_img, 1, 0)

    return result

# Capture video from your webcam or provide a path to a video file
cap = cv2.VideoCapture("C:/Users/ASUS/Downloads/Video1.mp4")

while(cap.isOpened()):
    ret, frame = cap.read()
    if ret:
        result = process_image(frame)
        cv2.imshow('Lane Detection', result)

        if cv2.waitKey(10) & 0xFF == ord('q'):
            break
    else:
        break

cap.release()
cv2.destroyAllWindows()
