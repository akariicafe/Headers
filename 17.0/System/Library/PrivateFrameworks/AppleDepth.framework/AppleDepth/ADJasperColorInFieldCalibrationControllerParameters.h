@interface ADJasperColorInFieldCalibrationControllerParameters : NSObject

@property (nonatomic) unsigned int numberOfValidSpotsForValidFrame;
@property (nonatomic) unsigned int numberOfMinimalRangeSpots;
@property (nonatomic) float thresholdDepthValue;
@property (nonatomic) float thresholdPrecOfValidDepth;
@property (nonatomic) float minRotationBetweenFrames;
@property (nonatomic) float sceneDiversityMinDepthDiff;
@property (nonatomic) unsigned short sceneDiversityMinChangedSpots;
@property (nonatomic) float sensorHeightFromWidthAnd4By3Ratio;
@property (nonatomic) float allowedFrameCropHeightThreshold;
@property (nonatomic) float allowedFrameCropWidthThreshold;
@property (nonatomic) float allowedFrameRatioThreshold;
@property (nonatomic) float allowedFrameRatio;
@property (nonatomic) float allowedDriftFromSymmetricCrop;

- (id)init;
- (id)initWithFlowType:(int)a0;

@end
