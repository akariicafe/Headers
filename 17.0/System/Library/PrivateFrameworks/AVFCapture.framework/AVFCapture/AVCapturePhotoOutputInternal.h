@class AVWeakReference, NSString, NSArray, AVCapturePhotoSettings, NSDictionary, AVMomentCaptureSettings, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group, AVCapturePhotoCaptureDelegate;

@interface AVCapturePhotoOutputInternal : NSObject {
    AVWeakReference *weakReference;
    long long lastSettingsUniqueID;
    NSArray *availablePhotoPixelFormatTypes;
    NSArray *availablePhotoCodecTypes;
    NSDictionary *availableRawPhotoPixelFormatTypes;
    NSArray *availablePhotoFileTypes;
    NSArray *availableRawPhotoFileTypes;
    BOOL appleProRAWSupported;
    BOOL appleProRAWEnabled;
    long long maxPhotoQualityPrioritization;
    BOOL maxPhotoQualityPrioritizationHasBeenSetByClient;
    BOOL stillImageStabilizationSupported;
    BOOL virtualDeviceFusionSupported;
    BOOL virtualDeviceConstituentPhotoDeliverySupported;
    BOOL virtualDeviceConstituentPhotoDeliveryEnabled;
    BOOL dualCameraDualPhotoDeliverySupported;
    BOOL dualCameraDualPhotoDeliveryEnabled;
    BOOL cameraCalibrationDataDeliverySupported;
    NSArray *supportedHDRModes;
    BOOL EV0PhotoDeliverySupported;
    NSArray *supportedFlashModes;
    NSArray *supportedDigitalFlashModes;
    BOOL digitalFlashCaptureEnabled;
    BOOL autoRedEyeReductionSupported;
    BOOL highResolutionCaptureEnabled;
    unsigned long long maxBracketedCapturePhotoCount;
    BOOL lensStabilizationDuringBracketedCaptureSupported;
    BOOL livePhotoCaptureSupported;
    BOOL livePhotoCaptureEnabled;
    BOOL livePhotoAutoTrimmingEnabled;
    NSArray *availableLivePhotoVideoCodecTypes;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoMovieDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } livePhotoMovieVideoFrameDuration;
    struct { int width; int height; } livePhotoMovieDimensions;
    BOOL livePhotoCaptureSuspended;
    BOOL preservesLivePhotoCaptureSuspendedOnSessionStop;
    BOOL depthDataDeliverySupported;
    BOOL depthDataDeliveryEnabled;
    BOOL portraitEffectsMatteDeliverySupported;
    BOOL portraitEffectsMatteDeliveryEnabled;
    NSArray *availableSemanticSegmentationTypes;
    NSArray *enabledSemanticSegmentationTypes;
    BOOL filterRenderingEnabled;
    BOOL imageOptimizationForOfflineVideoStabilizationSupported;
    BOOL optimizesImagesForOfflineVideoStabilization;
    struct { int width; int height; } optimizedImageDimensionsForOfflineStabilization;
    float timeLapseCaptureRate;
    BOOL timeLapseCaptureRateNeedsUpdate;
    BOOL livePhotoMovieProcessingSuspended;
    BOOL videoCaptureSupported;
    BOOL videoCaptureEnabled;
    BOOL resumeLivePhotoMovieCaptureAfterVideoCaptureEnds;
    NSObject<OS_dispatch_queue> *sceneDetectionObserversDispatchQueue;
    int flashSceneObserverCount;
    int HDRSceneObserverCount;
    int stillImageStabilizationSceneObserverCount;
    BOOL isFlashScene;
    BOOL isHDRScene;
    BOOL isStillImageStabilizationScene;
    int digitalFlashStatusObserverCount;
    long long digitalFlashStatus;
    int digitalFlashExposureTimesObserverCount;
    NSDictionary *digitalFlashExposureTimes;
    AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
    struct OpaqueFigSimpleMutex { } *requestsLock;
    NSMutableArray *photoRequests;
    NSMutableArray *prepareRequests;
    NSMutableArray *movieRequests;
    NSObject<OS_dispatch_queue> *beginEndIrisMovieCaptureHostTimeQueue;
    NSObject<OS_dispatch_group> *beginEndIrisMovieCaptureHostTimeDispatchGroup;
    NSString *sourceDeviceType;
    struct ct_green_tea_logger_s { } *greenTeaLogger;
    BOOL movieRecordingSupported;
    BOOL movieRecordingEnabled;
    BOOL spatialOverCaptureSupported;
    BOOL spatialOverCaptureEnabled;
    AVMomentCaptureSettings *momentCaptureInFlight;
    id<AVCapturePhotoCaptureDelegate> momentPhotoCaptureDelegateInFlight;
    NSString *momentCaptureRequestIdentifierInFlight;
    long long lastMomentSettingsUniqueID;
    BOOL autoDeferredPhotoDeliverySupported;
    BOOL autoDeferredPhotoDeliveryEnabled;
    BOOL processedPhotoZoomWithoutUpscalingSupported;
    BOOL focusPixelFocusBlurScoreSupported;
    BOOL focusPixelFocusBlurScoreEnabled;
    BOOL contentAwareDistortionCorrectionSupported;
    BOOL contentAwareDistortionCorrectionEnabled;
    BOOL responsiveCaptureSupported;
    BOOL responsiveCaptureEnabled;
    BOOL zeroShutterLagSupported;
    BOOL zeroShutterLagEnabled;
    BOOL zeroShutterLagAutomaticallyEnabled;
    long long captureReadiness;
    struct AVCapturePhotoOutputCaptureReadinessState { BOOL sessionIsRunning; BOOL autoDeferredPhotoDeliveryEnabled; BOOL responsiveCaptureEnabled; int numberOfPhotoCapturesInflight; long long latestCaptureUniqueID; long long inflightNonOverlappingCaptureUniqueID; long long inflightUniqueIDWaitingForCapture; long long inflightUniqueIDWaitingForProcessing; } readinessState;
    NSMutableArray *readinessCoordinators;
    BOOL previewQualityAdjustedPhotoFilterRenderingSupported;
    BOOL previewQualityAdjustedPhotoFilterRenderingEnabled;
    BOOL fastCapturePrioritizationSupported;
    BOOL fastCapturePrioritizationEnabled;
    BOOL highPhotoQualitySupported;
    BOOL semanticStyleRenderingSupported;
    BOOL semanticStyleRenderingEnabled;
    struct { int width; int height; } maxPhotoDimensions;
    BOOL privatePhotoDimensionsEnabled;
}

@end
