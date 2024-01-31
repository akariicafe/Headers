@class ARImageSensorSettings, NSString, ARWorldMap, NSSet, ARSceneReconstructionOptions;

@interface ARWorldTrackingConfiguration : ARConfiguration

@property (class, nonatomic) BOOL shouldProvide30FPSVideoFormats;
@property (class, readonly, nonatomic) BOOL supportsUserFaceTracking;
@property (class, readonly, nonatomic) BOOL supportsAppClipCodeTracking;

@property (nonatomic) BOOL relocalizationEnabled;
@property (copy, nonatomic) NSString *slamConfiguration;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled;
@property (nonatomic, getter=isAccuratePlaneExtentCheckEnabled) BOOL accuratePlaneExtentCheckEnabled;
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults;
@property (nonatomic) BOOL shouldUseUltraWideIfAvailable;
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic) BOOL depthTemporalSmoothingEnabled;
@property (nonatomic) BOOL depthOptimizedForStaticScene;
@property (nonatomic) struct ARSpatialMappingParameters { long long x0; long long x1; } spatialMappingParameters;
@property (retain, nonatomic) ARSceneReconstructionOptions *sceneReconstructionOptions;
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation;
@property (nonatomic) long long appClipCodePerformanceTestingMode;
@property (nonatomic) BOOL useSpatialMappingQualityMode;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking;
@property (nonatomic) BOOL recordForGeoTracking;
@property (nonatomic, getter=isPlaneBundleAdjustmentEnabled) BOOL planeBundleAdjustmentEnabled;
@property (copy, nonatomic) id /* block */ singleShotPlaneCallback;
@property (copy, nonatomic) id /* block */ trackedPlaneCallback;
@property (copy, nonatomic) id /* block */ planeDetectionVIOPoseCallback;
@property (copy, nonatomic) id /* block */ planeDetectionPoseUpdateCallback;
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *detectionObjects;
@property (nonatomic, getter=isCollaborationEnabled) BOOL collaborationEnabled;
@property (nonatomic, getter=userFaceTrackingEnabled) BOOL userFaceTrackingEnabled;
@property (nonatomic) BOOL appClipCodeTrackingEnabled;
@property (nonatomic) unsigned long long sceneReconstruction;

+ (id)supportedVideoFormats;
+ (id)new;
+ (id)supportedVideoFormatsForUltraWide;
+ (id)recommendedVideoFormatFor4KResolution;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (BOOL)isSupported;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)_querySupportedVideoFormats;
+ (id)_querySupportedVideoFormatsForUltraWide;
+ (id)_querySupportedVideoFormatsForUserFaceTracking;
+ (id)supportedVideoFormatsForUserFaceTracking;
+ (BOOL)supportsSceneReconstruction:(unsigned long long)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVideoFormat:(id)a0;
- (long long)_depthPrioritization;
- (BOOL)shouldUseJasper;
- (id)_trackingOptions;
- (void)createTechniques:(id)a0;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForUserFaceTracking;
- (id)parentImageSensorSettings;
- (id)secondaryTechniques;
- (void)setFrontCameraFaceAnchorsEnabled:(BOOL)a0;
- (BOOL)shouldEnableVisionDataForImageSensorSettings:(id)a0;
- (BOOL)shouldUseUltraWide;

@end
