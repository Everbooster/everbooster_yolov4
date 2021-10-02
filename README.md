# everbooster_yolov4
 + Everbooster custom YOLOv4 
 + Object Detection For Recycling

# Dataset Info
 + 6 classes (Plastic bottle, Plastic, Can, Glass bottle, Plastic bag, Paper pack)
 + 960 images
 + 1142 Objects
 + Plastic bottle : 189, Plastic : 302, Can : 147, Glass bottle : 215, Plastic bag : 176, Paper pack : 113


# Final Performance
class_id = 0, name = plastic_bottle, ap = 99.23%   	 (TP = 40, FP = 3) 
class_id = 1, name = plastic, ap = 98.41%   	 (TP = 83, FP = 3) 
class_id = 2, name = can, ap = 98.45%   	 (TP = 25, FP = 2) 
class_id = 3, name = glass_bottle, ap = 93.88%   	 (TP = 28, FP = 5) 
class_id = 4, name = plastic_bag, ap = 99.95%   	 (TP = 43, FP = 3) 
class_id = 5, name = paper_pack, ap = 99.79%   	 (TP = 29, FP = 1) 

 for conf_thresh = 0.25, precision = 0.94, recall = 0.96, F1-score = 0.95 
 for conf_thresh = 0.25, TP = 248, FP = 17, FN = 11, average IoU = 85.81 % 

 IoU threshold = 50 %, used Area-Under-Curve for each unique Recall 
 mean average precision (mAP@0.50) = 0.982851, or 98.29 % 
  
