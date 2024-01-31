@class NSRecursiveLock, NSArray, VisionCoreObjectCache, NSNotificationCenter, NSString, VNWeakTypeWrapperCollection, VNMTLDeviceWisdomParameters;
@protocol NSLocking;

@interface VNFrameworkManager : NSObject <VNLegacyForcedCleanupImplementing, VNMTLDeviceWisdomParametersProviding> {
    NSNotificationCenter *_notificationCenter;
    NSRecursiveLock *_detectorAccessingLock;
    NSRecursiveLock *_trackerResourcesAccessingLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionsAccessLock;
    VNWeakTypeWrapperCollection *_sessions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _wisdomParametersLock;
    VNMTLDeviceWisdomParameters *_wisdomParameters;
}

@property (readonly) VisionCoreObjectCache *detectorDescriptorsCache;
@property (readonly) id<NSLocking> detectorAccessingLock;
@property (readonly) id<NSLocking> trackerResourcesAccessingLock;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly, copy) NSArray *allSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (id)init;
- (id)_locateDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1 inSessions:(id)a2 excludingSession:(id)a3;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)_locateTrackerResourcesConfiguredWithOptions:(id)a0 inSessions:(id)a1 excludingSession:(id)a2;
- (void)registerSession:(id)a0;
- (id)loadedDetectors;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void)releaseMetalDeviceWisdomParameters;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (void).cxx_destruct;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 forSession:(id)a2 error:(id *)a3;
- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;
- (id)trackerResourcesConfiguredWithOptions:(id)a0 forSession:(id)a1 error:(id *)a2;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;

@end
