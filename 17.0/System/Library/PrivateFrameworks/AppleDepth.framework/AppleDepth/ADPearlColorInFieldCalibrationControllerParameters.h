@interface ADPearlColorInFieldCalibrationControllerParameters : NSObject

@property (nonatomic) float minRotationBetweenFrames;
@property (nonatomic) float thresholdPrecOfValidDepth;

- (id)init;

@end
