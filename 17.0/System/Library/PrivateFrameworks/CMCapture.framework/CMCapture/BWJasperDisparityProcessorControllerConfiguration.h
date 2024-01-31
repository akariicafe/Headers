@class BWVideoFormat;

@interface BWJasperDisparityProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputColorFormat;
@property (retain, nonatomic) BWVideoFormat *outputDepthFormat;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) int pointCloudTimeMachineCapacity;

- (void)dealloc;

@end
