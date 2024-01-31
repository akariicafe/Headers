@interface BWSoftISPProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) struct { int width; int height; } inputDimensions;
@property (nonatomic) struct { int width; int height; } outputDimensions;
@property (nonatomic) struct { int width; int height; } ultraHighResolutionInputDimensions;
@property (nonatomic) struct { int width; int height; } ultraHighResolutionOutputDimensions;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) BOOL cmiResourceEnabled;
@property (nonatomic) BOOL standardYUVProcessingEnabled;
@property (nonatomic) BOOL rawNightModeEnabled;
@property (nonatomic) BOOL deepFusionEnabled;
@property (nonatomic) BOOL learnedNREnabled;
@property (nonatomic) BOOL gdcEnabled;
@property (nonatomic) BOOL quadraProcessingEnabled;
@property (nonatomic) int qBinProcessingMode;
@property (nonatomic) int lossyCompressionLevel;
@property (nonatomic) BOOL linearRGBForDisparityEnabled;
@property (nonatomic) BOOL ltmHDRCurvesEnabled;
@property (nonatomic) BOOL sfhrSupportEnabled;

@end
