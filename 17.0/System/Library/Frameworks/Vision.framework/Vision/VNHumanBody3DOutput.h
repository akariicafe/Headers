@class ABPKSkeleton;

@interface VNHumanBody3DOutput : NSObject

@property (readonly, nonatomic) ABPKSkeleton *liftedSkeleton;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;

- (void).cxx_destruct;
- (id)initWithSkeleton:(id)a0 intrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a1 inputSize:(struct CGSize { double x0; double x1; })a2;

@end
