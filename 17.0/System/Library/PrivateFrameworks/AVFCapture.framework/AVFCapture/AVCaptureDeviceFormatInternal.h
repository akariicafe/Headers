@class FigCaptureSourceFormat, NSArray, NSDictionary;

@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMinFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } defaultActiveMaxFrameDuration;
    NSDictionary *fcSourceAttributes;
    struct opaqueCMFormatDescription { } *formatDescription;
    BOOL continuousZoomWithDepthEnabled;
    BOOL depthDataFormatsDisabled;
    NSArray *supportedDepthDataFormats;
    BOOL backgroundBlurSupported;
    BOOL backgroundBlurSupportedForContinuityCamera;
    NSArray *supportedMaxPhotoDimensions;
    BOOL studioLightingSupported;
    BOOL studioLightingSupportedForContinuityCamera;
    BOOL reactionEffectsSupported;
    BOOL reactionEffectsSupportedForContinuityCamera;
    BOOL isDepthDataFormat;
    BOOL centerStageSupported;
    BOOL centerStageSupportedForContinuityCamera;
}

@end
