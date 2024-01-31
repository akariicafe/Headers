@class NSError, NSString, PRUpdatingService, NSArray, PRSPosterPathsAssertion, NSMutableArray, PRSPosterUpdateSessionInfo, NSObject, RBSAssertion;
@protocol PBFRuntimeAssertionProviding, OS_dispatch_group;

@interface PBFPosterExtensionReloadDescriptorsOperation : NSBlockOperation <PRUpdatingServiceObserver> {
    NSMutableArray *_lock_completionObservers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    BOOL _lock_isFinished;
    PRSPosterUpdateSessionInfo *_sessionInfo;
    long long _powerLogReason;
    NSObject<OS_dispatch_group> *_lock_group;
    PRSPosterPathsAssertion *_lock_postRefreshPosterPathsAssertion;
    RBSAssertion *_lock_extensionPosterUpdateRuntimeAssertion;
    RBSAssertion *_lock_extensionPosterUpdateEntitledMemoryAssertion;
}

@property (copy) PRSPosterPathsAssertion *postRefreshPosterPathsAssertion;
@property (retain) NSError *error;
@property BOOL didTimeout;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) PRUpdatingService *updatingService;
@property (readonly, nonatomic) id<PBFRuntimeAssertionProviding> runtimeAssertionProvider;
@property (readonly, nonatomic) double executionStartDate;
@property (readonly, nonatomic) double executionFinishDate;
@property (readonly, nonatomic) double executionTime;
@property (readonly, nonatomic, getter=hasUniqueSessionInfo) BOOL uniqueSessionInfo;
@property (readonly, copy) NSArray *preRefreshPosterDescriptors;
@property (readonly, copy) NSArray *postRefreshPosterDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_setup;
- (void)invalidateAssertionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_userInfoForErrors;
- (void)cancel;
- (id)initWithUpdatingService:(id)a0 extensionBundleIdentifier:(id)a1 sessionInfo:(id)a2 preRefreshPosterDescriptors:(id)a3 runtimeAssertionProvider:(id)a4 timeout:(double)a5 powerLogReason:(long long)a6;
- (void)_finishWithError:(id)a0 postRefreshPosterPathsAssertion:(id)a1;
- (double)_lock_executionTime;
- (void)_fireCompletionObservers:(id)a0 instance:(id)a1 error:(id)a2;
- (void)addCompletionObserver:(id /* block */)a0;
- (void)updatingService:(id)a0 didInvalidateWithError:(id)a1;
- (double)executionTime;

@end
