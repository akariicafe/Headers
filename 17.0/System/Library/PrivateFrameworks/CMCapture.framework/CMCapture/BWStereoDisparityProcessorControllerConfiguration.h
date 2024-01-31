@class NSArray;

@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) NSArray *portTypesWithDepthSegmentationPortraitParameters;
@property (nonatomic) struct { int width; int height; } inputDimensions;
@property (nonatomic) struct { int width; int height; } disparityOutputDimensions;
@property (nonatomic) int stillImageDepthDataType;
@property (nonatomic) BOOL zoomingDisparityAllowed;
@property (nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;

- (void)dealloc;
- (id)description;

@end
