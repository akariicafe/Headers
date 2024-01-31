@class NSArray, CAMVideoThumbnailOutputConfiguration, CAMSemanticStyle;

@interface CAMCaptureGraphConfiguration : NSObject

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) long long devicePosition;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long macroMode;
@property (readonly, nonatomic) long long videoConfiguration;
@property (readonly, nonatomic) long long audioConfiguration;
@property (readonly, nonatomic) unsigned long long previewConfiguration;
@property (readonly, nonatomic) long long previewSampleBufferVideoFormat;
@property (readonly, nonatomic) NSArray *previewFilters;
@property (readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration;
@property (readonly, nonatomic) long long photoEncodingBehavior;
@property (readonly, nonatomic) long long videoEncodingBehavior;
@property (readonly, nonatomic) BOOL enableAutoFPSVideo;
@property (readonly, nonatomic, getter=isVideoHDRSuspended) BOOL videoHDRSuspended;
@property (readonly, nonatomic) long long aspectRatioCrop;
@property (readonly, nonatomic) long long photoQualityPrioritization;
@property (readonly, nonatomic, getter=isCaptureMirrored) BOOL captureMirrored;
@property (readonly, nonatomic) BOOL enableRAWCaptureIfSupported;
@property (readonly, nonatomic) unsigned long long semanticStyleSupport;
@property (readonly, nonatomic) CAMSemanticStyle *previewSemanticStyle;
@property (readonly, nonatomic) BOOL enableContentAwareDistortionCorrection;
@property (readonly, nonatomic) BOOL enableResponsiveShutter;
@property (readonly, nonatomic) BOOL suspendLivePhotoCapture;
@property (readonly, nonatomic) long long videoStabilizationStrength;
@property (readonly, nonatomic) long long maximumPhotoResolution;
@property (readonly, nonatomic) long long colorSpace;
@property (readonly, nonatomic) BOOL enableDepthSuggestion;
@property (readonly, nonatomic) BOOL enableZoomPIP;

- (id)completeDescription;
- (id)shortDescription;
- (id)initWithCaptureMode:(long long)a0 captureDevice:(long long)a1 macroMode:(long long)a2 videoConfiguration:(long long)a3 audioConfiguration:(long long)a4 previewConfiguration:(unsigned long long)a5 previewSampleBufferVideoFormat:(long long)a6 previewFilters:(id)a7 videoThumbnailOutputConfiguration:(id)a8 photoEncodingBehavior:(long long)a9 videoEncodingBehavior:(long long)a10 enableAutoFPSVideo:(BOOL)a11 videoHDRSuspended:(BOOL)a12 aspectRatioCrop:(long long)a13 photoQualityPrioritization:(long long)a14 captureMirrored:(BOOL)a15 enableRAWCaptureIfSupported:(BOOL)a16 semanticStyleSupport:(unsigned long long)a17 previewSemanticStyle:(id)a18 enableContentAwareDistortionCorrection:(BOOL)a19 enableResponsiveShutter:(BOOL)a20 suspendLivePhotoCapture:(BOOL)a21 videoStabilizationStrength:(long long)a22 maximumPhotoResolution:(long long)a23 colorSpace:(long long)a24 enableDepthSuggestion:(BOOL)a25 enableZoomPIP:(BOOL)a26;
- (id)modeDescription;
- (id)description;
- (void).cxx_destruct;
- (id)devicePositionDescription;
- (id)deviceDescription;

@end
