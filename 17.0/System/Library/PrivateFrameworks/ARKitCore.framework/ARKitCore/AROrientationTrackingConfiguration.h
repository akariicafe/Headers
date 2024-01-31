@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;

+ (id)supportedVideoFormats;
+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)_querySupportedVideoFormats;

- (id)init;
- (id)description;

@end
