@class NSString, NSMapTable, NSHashTable, BSAtomicFlag, NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface PBFRuntimeAssertionManager : NSObject <PBFRuntimeAssertionProviding, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    BSAtomicFlag *_invalidationFlag;
    NSHashTable *_stateQueue_knownAssertions;
    NSMapTable *_stateQueue_acquistionDateForAssertion;
    id<BSInvalidatable> _stateCaptureSentinel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)acquireAssertion:(id)a0 reason:(id)a1 target:(id)a2 invalidationHandler:(id /* block */)a3;
- (id)_stateQueue_debugDescriptionForPosterExtensionProcessAssertions;
- (id)_stateQueue_debugDescriptionForTarget:(id)a0;
- (void)invalidate;
- (id)acquirePrewarmRuntimeAssertionForReason:(id)a0 target:(id)a1 invalidationHandler:(id /* block */)a2;
- (id)_stateQueue_debugDescriptionForPosterBoardProcessAssertions;
- (void).cxx_destruct;
- (id)_buildRBSAssertionForTarget:(id)a0 assertionIdentifier:(id)a1 explanation:(id)a2 invalidationHandler:(id /* block */)a3;
- (void)_runningBoardAssertionStateDidUpdate:(id)a0 assertionIdentifier:(id)a1 error:(id)a2;
- (id)_stateQueue_debugDescription;
- (id)acquirePosterUpdateMemoryAssertionForReason:(id)a0 target:(id)a1 auditToken:(id)a2 posterProviderBundleIdentifier:(id)a3;
- (id)acquirePosterUpdateRuntimeAssertionForReason:(id)a0 target:(id)a1;

@end
