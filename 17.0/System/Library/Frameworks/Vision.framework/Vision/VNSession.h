@class VNVTSessionManager, NSString, VNCIContextManager, VNFrameworkManager, VNCVPixelBufferPoolManager, VNRPNTrackerEspressoResourcesCache, VNTrackerManager, VNDetectorCache;

@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNRPNTrackerResourcesProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {
    VNFrameworkManager *_frameworkManager;
    VNDetectorCache *_detectorCache_onlyAccessWithDetectorAccessingLock;
    VNRPNTrackerEspressoResourcesCache *_trackerResourceCache;
    VNVTSessionManager *_vtSessionManager;
    VNCIContextManager *_ciContextManager;
    VNCVPixelBufferPoolManager *_cvPixelBufferPoolManager;
    VNTrackerManager *_trackerManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalSession;

- (void)releaseCachedResources;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (id)init;
- (void)dealloc;
- (void)detectorCache:(id)a0 didEvictDetector:(id)a1;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (id)loadedDetectors;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (id)trackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void)releaseCachedResourcesWithCompletionBlock:(id /* block */)a0;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)vnciContextManager;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (Class)trackerClassForOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCachingBehavior:(unsigned long long)a0;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)_cachedTrackerResourcesConfiguredWithOptions:(id)a0;
- (id)vncvPixelBufferPoolManager;
- (void)releaseTracker:(id)a0;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)vnvtSessionManager;
- (void)detectorCache:(id)a0 didCacheDetector:(id)a1;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (id)_cachedDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1;

@end
