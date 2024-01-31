@class ARVideoFormat;

@interface CoreOC.ARWorldTrackingConfigurationForObjectCapture : ARWorldTrackingConfiguration

@property (class, nonatomic, readonly) BOOL supportsUserFaceTracking;
@property (class, nonatomic, readonly) ARVideoFormat *recommendedVideoFormatForHighResolutionFrameCapturing;

- (id)initPrivate;
- (id)init;

@end
