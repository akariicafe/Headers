@class NSArray, BWStillImageSampleBufferSinkNodeAnalyticsConfiguration, BWStillImageCaptureAnalyticsPayload;

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    int _stillImageCapturePipeliningMode;
    BOOL _clientIsCameraOrDerivative;
    BOOL _captureTimePhotosCurationSupported;
    NSArray *_propagatedAttachedMediaKeys;
    BOOL _focusPixelBlurScoreEnabled;
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration *_analyticsConfiguration;
    long long _lastCaptureRequestTime;
    long long _lastReportedSettingsID;
    BWStillImageCaptureAnalyticsPayload *_cachedAnalyticsPayloadForPortraitFailures;
}

@property (copy, nonatomic) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithSinkID:(id)a0;
- (id)propagatedAttachedMediaKeys;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (id)initWithInputMediaType:(unsigned int)a0 sinkID:(id)a1;
- (void)setCaptureTimePhotosCurationSupported:(BOOL)a0;
- (void)setFocusPixelBlurScoreEnabled:(BOOL)a0;
- (void)setStillImageCapturePipeliningMode:(int)a0;
- (void)setPropagatedAttachedMediaKeys:(id)a0;
- (void)setClientIsCameraOrDerivative:(BOOL)a0;
- (id)analyticsConfiguration;
- (BOOL)clientIsCameraOrDerivative;
- (void)setAnalyticsConfiguration:(id)a0;
- (int)stillImageCapturePipeliningMode;
- (BOOL)focusPixelBlurScoreEnabled;
- (BOOL)captureTimePhotosCurationSupported;

@end
