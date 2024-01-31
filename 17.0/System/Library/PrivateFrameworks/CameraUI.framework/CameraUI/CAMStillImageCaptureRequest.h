@class NSString, NSArray, CAMSemanticStyle, NSURL, CAMTextRegionResult;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest> {
    long long _aspectRatio;
}

@property (readonly, copy, nonatomic) NSString *timelapseIdentifier;
@property (readonly, copy, nonatomic) NSString *EV0PersistenceUUID;
@property (readonly, nonatomic) long long effectFilterType;
@property (readonly, nonatomic) long long lightingEffectType;
@property (readonly, nonatomic) long long aspectRatioCrop;
@property (readonly, nonatomic) unsigned long long maximumBurstLength;
@property (readonly, nonatomic) long long flashMode;
@property (readonly, nonatomic) long long hdrMode;
@property (readonly, nonatomic) long long irisMode;
@property (readonly, nonatomic) BOOL wantsDepthData;
@property (readonly, nonatomic) NSArray *adjustmentFilters;
@property (readonly, nonatomic) NSArray *originalFilters;
@property (readonly, nonatomic) long long photoQualityPrioritization;
@property (readonly, nonatomic) BOOL wantsAutoDualCameraFusion;
@property (readonly, nonatomic) BOOL wantsSemanticSceneFilter;
@property (readonly, nonatomic) BOOL wantsAudioForCapture;
@property (readonly, nonatomic) BOOL wantsSquareCrop;
@property (readonly, nonatomic) BOOL wantsHighResolutionStills;
@property (readonly, nonatomic) BOOL stillDuringVideo;
@property (readonly, nonatomic) long long ctmCaptureType;
@property (readonly, nonatomic, getter=isCTMVideo) BOOL CTMVideo;
@property (readonly, nonatomic) long long lowLightMode;
@property (readonly, nonatomic) CAMSemanticStyle *semanticStyle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } desiredPreviewSize;
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, copy, nonatomic) NSString *irisIdentifier;
@property (readonly, copy, nonatomic) NSString *textAnalysisIdentifier;
@property (readonly, copy, nonatomic) CAMTextRegionResult *textAnalysisRegion;
@property (readonly, copy, nonatomic) NSURL *localVideoDestinationURL;
@property (readonly, copy, nonatomic) NSURL *localCTMVideoDestinationURL;
@property (readonly, nonatomic) BOOL disablesCameraSwitchingDuringRecording;
@property (readonly, nonatomic) long long torchMode;
@property (readonly, copy, nonatomic) NSString *videoPersistenceUUID;
@property (readonly, nonatomic) BOOL wantsEV0ForHDR;
@property (readonly, copy, nonatomic) NSString *EV0IrisIdentifier;
@property (readonly, copy, nonatomic) NSURL *EV0LocalVideoDestinationURL;
@property (readonly, copy, nonatomic) NSString *EV0VideoPersistenceUUID;
@property (readonly, nonatomic) unsigned long long userInitiationTime;
@property (readonly, weak, nonatomic) id<CAMStillImageCaptureRequestDelegate> delegate;
@property (readonly, nonatomic) long long maximumPhotoResolution;
@property (readonly, nonatomic) BOOL wantsWhiteBalanceLockedDuringVideoRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)rawPixelFormatTypeForPhotoOutput:(id)a0;

- (id)irisVideoPersistenceUUIDForEV0:(BOOL)a0;
- (id)capturePhotoSettingsWithContext:(id)a0;
- (BOOL)needsLivePhotoCaptureResumedOnPhotoOutput:(id)a0;
- (id)captureRequest;
- (BOOL)hasAdjustments;
- (void)_configurePhotoSettings:(id)a0 shouldIgnoreInitiationSettingsProperties:(BOOL)a1 context:(id)a2;
- (BOOL)isEV0LocalVideoDestinationURL:(id)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1 includeAnalytics:(BOOL)a2;
- (id)irisIdentifierForEV0:(BOOL)a0;
- (id)init;
- (BOOL)shouldProtectPersistenceForVideo;
- (id)irisLocalVideoDestinationURLForEV0:(BOOL)a0;
- (void)_sanitizeCapturePhotoSettings:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)irisStillImagePersistenceUUIDForEV0:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
