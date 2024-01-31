@class CAUserAdjustment;

@interface CAUserAdjustmentCommand : NSObject

@property (readonly) double minXDelta;
@property (readonly) double maxXDelta;
@property (readonly) double minYDelta;
@property (readonly) double maxYDelta;
@property (readonly) double minLuminanceScale;
@property (readonly) double maxLuminanceScale;
@property (readonly) CAUserAdjustment *userAdjustment;

- (void)dealloc;
- (id)initWithUserAdjustment:(id)a0;
- (BOOL)transformWhitePointByXDelta:(double)a0 yDelta:(double)a1 luminanceScale:(double)a2;

@end
