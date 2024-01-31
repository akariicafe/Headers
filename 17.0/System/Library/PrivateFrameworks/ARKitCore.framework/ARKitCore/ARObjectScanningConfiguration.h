@interface ARObjectScanningConfiguration : ARConfiguration

@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) unsigned long long planeDetection;

+ (id)supportedVideoFormats;
+ (id)new;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;

@end
