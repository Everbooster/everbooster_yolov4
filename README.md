# everbooster_yolov4
 + Everbooster custom YOLOv4 
 + Object Detection For Recycling

# Dataset Info
 + 6 classes (Plastic bottle, Plastic, Can, Glass bottle, Plastic bag, Paper pack)
 + 840 images
 + 896 Objects
 + Plastic bottle : 132, Plastic : 294, Can : 98, Glass bottle : 146, Plastic bag : 150, Paper pack : 76


# Final Performance
class_id = 0, name = plastic_bottle, ap = 99.32%       (TP = 38, FP = 3)   
class_id = 1, name = plastic, ap = 96.31%       (TP = 83, FP = 3)   
class_id = 2, name = can, ap = 99.13%       (TP = 24, FP = 0)   
class_id = 3, name = glass_bottle, ap = 94.13%       (TP = 26, FP = 9)   
class_id = 4, name = plastic_bag, ap = 99.77%       (TP = 40, FP = 3)   
class_id = 5, name = paper_pack, ap = 99.16%       (TP = 26, FP = 1)  
  
 for conf_thresh = 0.25, precision = 0.93, recall = 0.95, F1-score = 0.94   
 for conf_thresh = 0.25, TP = 237, FP = 19, FN = 12, average IoU = 83.10 %   
  
 IoU threshold = 50 %, used Area-Under-Curve for each unique Recall   
 mean average precision (mAP@0.50) = 0.979714, or 97.97 % 
  
