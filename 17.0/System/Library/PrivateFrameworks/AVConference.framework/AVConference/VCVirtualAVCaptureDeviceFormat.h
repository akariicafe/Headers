@class NSString, NSArray;

@interface VCVirtualAVCaptureDeviceFormat : AVCaptureDeviceFormat {
    struct opaqueCMFormatDescription { } *_formatDescription;
    BOOL _videoStabilizationMode;
}

@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (retain, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic) float videoFieldOfView;
@property (nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (nonatomic) double videoMaxZoomFactor;
@property (nonatomic) double videoZoomFactorUpscaleThreshold;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minExposureDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDuration;
@property (nonatomic) float minISO;
@property (nonatomic) float maxISO;
@property (nonatomic, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (nonatomic) struct { int width; int height; } highResolutionStillImageDimensions;
@property (nonatomic, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (nonatomic, getter=isHighestPhotoQualitySupported) BOOL highestPhotoQualitySupported;
@property (nonatomic) long long autoFocusSystem;
@property (retain, nonatomic) NSArray *supportedColorSpaces;
@property (nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (retain, nonatomic) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (retain, nonatomic) NSArray *supportedDepthDataFormats;
@property (retain, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (retain, nonatomic) NSArray *supportedMaxPhotoDimensions;
@property (retain, nonatomic) NSArray *secondaryNativeResolutionZoomFactors;
@property (nonatomic, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported;

- (void)dealloc;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isVideoStabilizationModeSupported:(long long)a0;

@end
