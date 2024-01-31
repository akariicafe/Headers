@class NSNumber, NSString, ARWorldMap, NSMutableDictionary, NSDictionary, NSObject, ARSceneReconstructionOptions, ARImageSensorSettings;
@protocol OS_dispatch_semaphore;

@interface ARWorldTrackingOptions : NSObject <NSCopying> {
    NSMutableDictionary *_activeVideoFormatsMap;
    NSObject<OS_dispatch_semaphore> *_activeVideoFormatsSemaphore;
    NSString *_slamConfigurationPreset;
}

@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettings;
@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL relocalizationEnabled;
@property (copy, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSString *slamConfiguration;
@property (nonatomic) BOOL deterministicMode;
@property (nonatomic) BOOL lowQosSchedulingEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic) BOOL mlModelEnabled;
@property (nonatomic, getter=isCollaborationEnabled) BOOL collaborationEnabled;
@property (nonatomic) BOOL depthBuffersWillBeProvided;
@property (nonatomic) BOOL visionDataWillBeReplayed;
@property (nonatomic) unsigned long long sceneReconstruction;
@property (nonatomic) BOOL planeEstimationShouldUseJasperData;
@property (retain, nonatomic) ARSceneReconstructionOptions *sceneReconstructionOptions;
@property (readonly, nonatomic) NSDictionary *activeVideoFormatsMap;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking;
@property (nonatomic) BOOL disableMLRelocalization;
@property (nonatomic) BOOL recordForGeoTracking;
@property (retain, nonatomic) NSNumber *vioSessionID;
@property (nonatomic) BOOL planeBundleAdjustmentEnabled;
@property (copy, nonatomic) id /* block */ singleShotPlaneCallback;
@property (copy, nonatomic) id /* block */ trackedPlaneCallback;
@property (copy, nonatomic) id /* block */ planeDetectionVIOPoseCallback;
@property (copy, nonatomic) id /* block */ planeDetectionPoseUpdateCallback;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateCameraMap;
- (unsigned int)cameraIdForCaptureDeviceType:(id)a0;
- (int)createSLAMCalibration:(struct CV3DSLAMCalibration **)a0;
- (void)createSLAMConfig:(struct CV3DSLAMConfig **)a0 calibration:(struct CV3DSLAMCalibration { } *)a1;
- (id)initWithImageSensorSettings:(id)a0;
- (int)setupCameraCalibration:(struct CV3DSLAMCalibration **)a0 forImageSensorSettings:(id)a1 deviceModel:(int)a2;
- (BOOL)shouldUseUltraWide;

@end
