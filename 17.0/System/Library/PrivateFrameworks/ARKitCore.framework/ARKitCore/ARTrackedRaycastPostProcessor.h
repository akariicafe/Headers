@class ARSession, NSArray;

@interface ARTrackedRaycastPostProcessor : NSObject

@property (weak) ARSession *session;
@property (readonly, nonatomic) NSArray *trackedRaycasts;

- (id)initWithSession:(id)a0;
- (void)removeTrackedRaycastWithIdentifier:(id)a0;
- (void)updateFromTimer:(id)a0;
- (void)dealloc;
- (void)processUpdatedResults:(id)a0;
- (void)addTrackedRaycast:(id)a0 andProcessInitialResults:(id)a1;
- (void)startUpdateTimer;
- (void)processInitialResults:(id)a0 forRaycast:(id)a1;
- (void)invalidateRaycastWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updateFromPoseGraphEventWithData:(id)a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (void)performBlockWhileLockingRaycasts:(id /* block */)a0;
- (BOOL)result:(id)a0 isCloseEnoughToInitialResultForRaycast:(id)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })updatePose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 oldRayOrigin:(double[3])a2 oldRayDirection:(double[3])a3 newRayOrigin:(double[3])a4 newRayDirection:(double[3])a5;
- (void)invalidateAllRaycasts;

@end
