@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (copy, nonatomic) NSSet *trackingImages;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (id)supportedVideoFormats;
+ (id)new;
+ (id)recommendedVideoFormatFor4KResolution;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)createTechniques:(id)a0;

@end
