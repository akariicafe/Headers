@class RBSAssertion, NSString, BKSSystemShellService, NSMutableSet, BSCompoundAssertion, NSMutableArray, FBSystemShellInitializationContext;

@interface FBSystemShell : NSObject <BSDescriptionProviding> {
    id _observerToken;
    RBSAssertion *_runningAssertion;
    BKSSystemShellService *_systemShellService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
    BSCompoundAssertion *_lock_temporaryWatchdogAssertion;
}

@property (readonly, nonatomic) unsigned long long _state;
@property (readonly, nonatomic) FBSystemShellInitializationContext *initializationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:(id)a0;

- (id)_initWithOptions:(id)a0;
- (void)_setState:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void)readyForInteraction;
- (void)_initializationComplete;
- (void)_addBlockToExecuteWhenReady:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)assertWatchdogEnabledForLimitedDurationForReason:(id)a0;
- (void)_informSystemShellServiceDidFinishLaunching;
- (void).cxx_destruct;
- (void)_setSystemIdleSleepDisabled:(BOOL)a0 forReason:(id)a1;
- (id)succinctDescription;
- (void)sendActionsToBackBoard:(id)a0;
- (void)_startSystemShellService;

@end
