@interface VisionCoreSparseOpticalFlowResultPoint : NSObject

@property (readonly, nonatomic) float reprojError;
@property (readonly, nonatomic) BOOL isInlier;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;

- (id)initWithX:(double)a0 Y:(double)a1 inlier:(BOOL)a2 reprojError:(float)a3;

@end
