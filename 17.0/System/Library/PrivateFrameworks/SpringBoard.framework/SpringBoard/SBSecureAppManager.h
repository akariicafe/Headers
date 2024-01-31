@class NSMutableDictionary, SBWakeDestination, NSHashTable, SBLayoutStateTransitionCoordinator, NSMutableArray, NSString;

@interface SBSecureAppManager : NSObject <SBLayoutStateTransitionObserver>

@property (retain, nonatomic) NSMutableDictionary *secureAppActions;
@property (retain, nonatomic) NSMutableArray *remoteAlertActions;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *wakeDestinationProviders;
@property (readonly, nonatomic) BOOL hasSecureApp;
@property (readonly, nonatomic) BOOL hasWakeDestination;
@property (readonly, nonatomic) SBWakeDestination *wakeDestination;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *secureAppTransitionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)secureAppAction;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_addSecureAppAction:(id)a0;
- (void)addLockScreenContentAction:(id)a0;
- (id)_applicationForAction:(id)a0;
- (void)removeWakeDestinationProvider:(id)a0;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(id /* block */)a0;
- (id)_applicationSceneEntityForAction:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_addRemoteAlertLockScreenContentAction:(id)a0;
- (BOOL)hasSecureAppOfType:(unsigned long long)a0;
- (void)addObserver:(id)a0;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (void)addWakeDestinationProvider:(id)a0;

@end
