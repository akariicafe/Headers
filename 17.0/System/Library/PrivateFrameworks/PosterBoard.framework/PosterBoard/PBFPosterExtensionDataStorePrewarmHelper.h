@class NSError, NSString, NSMutableDictionary, NSDictionary, PBFPosterExtensionDataStorePrewarmPlan, BSAtomicFlag, NSObject, NSMutableArray;
@protocol OS_dispatch_workloop;

@interface PBFPosterExtensionDataStorePrewarmHelper : NSObject <PBFPosterExtensionDataStorePrewarmStatusUpdater, BSInvalidatable> {
    NSObject<OS_dispatch_workloop> *_workloop;
    BSAtomicFlag *_invalidationFlag;
    BSAtomicFlag *_finishedFlag;
    NSDictionary *_completionFlagForPhase;
    NSDictionary *_dispatchGroupForPhase;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lock_completionObservers;
    double _lock_startTime;
    double _lock_endTime;
    id /* block */ _lock_completion;
    NSMutableDictionary *_lock_nonFatalErrorsForPhase;
    NSMutableDictionary *_lock_fatalErrorForPhase;
    id /* block */ _lock_cancellationHandlerForCurrentPhase;
    NSError *_lock_finalizedError;
    NSError *_lock_finalizedAmalgamtedNonfatalErrors;
}

@property (retain) NSString *activePhase;
@property (readonly, copy) PBFPosterExtensionDataStorePrewarmPlan *plan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)finishedWithError:(id)a0;
- (id)_executePhase:(id)a0 executionBlock:(id /* block */)a1 context:(id)a2 timeout:(double)a3;
- (void)_fireCompletionHandler:(id /* block */)a0 reason:(id)a1;
- (void)_markAsDoneAndFireCompletionHandlers;
- (void)appendCompletionObserver:(id /* block */)a0;
- (void)executePrewarmWithExecutor:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithPlan:(id)a0;
- (void)noteNonFatalError:(id)a0;

@end
