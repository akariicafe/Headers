@class BWVideoFormat;

@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputColorFormat;
@property (retain, nonatomic) BWVideoFormat *outputDepthFormat;
@property (nonatomic) struct { int width; int height; } standardFormatDimensions;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;

- (void)dealloc;
- (id)description;

@end
