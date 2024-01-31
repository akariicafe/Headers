@interface BWStillImageSampleBufferSinkNodeAnalyticsConfiguration : NSObject

@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) float formatMaxFrameRate;
@property (nonatomic) BOOL isHighQualityPhotoWithVideoFormatSupported;
@property (nonatomic) BOOL isPhotoFormat;
@property (nonatomic) BOOL isTimeLapse;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL binned;
@property (nonatomic) BOOL isSemanticStyleRenderingSupported;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;

- (void)dealloc;

@end
