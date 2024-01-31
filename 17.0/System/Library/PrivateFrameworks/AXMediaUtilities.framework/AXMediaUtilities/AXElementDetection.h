@class NSString;

@interface AXElementDetection : NSObject {
    float _area;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultBox;
@property (nonatomic) float confidence;
@property (nonatomic) int scale;
@property (nonatomic) int mergesCount;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;
@property (retain, nonatomic) NSString *labelName;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } boxCenter;
@property (readonly, nonatomic) float distanceToDefaultBox;
@property (readonly, nonatomic) float smartDistance;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isOverlappingLowMergeDet:(id)a0 withOverlapThreshold:(float)a1 withMergeCountDelta:(int)a2;
- (BOOL)isOverlappingSmallFace:(id)a0 withOverlapThreshold:(float)a1 withSizeRatio:(float)a2;
- (float)overlap:(id)a0;
- (float)iOa:(id)a0;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 hasLabel:(BOOL)a4 label:(int)a5;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 hasLabel:(BOOL)a4 label:(int)a5 labelName:(id)a6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 mergesCount:(int)a4;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 mergesCount:(int)a4 hasLabel:(BOOL)a5 label:(int)a6;
- (id)initWithBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 defaultBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2 scale:(int)a3 mergesCount:(int)a4 hasLabel:(BOOL)a5 label:(int)a6 labelName:(id)a7;

@end
