@class NSString, NSMapTable, SBWorkspaceKeyboardFocusController, NSHashTable, NSObject;
@protocol OS_dispatch_queue, _SBSceneResolving, _SBKeyboardServiceConnectionListening;

@interface SBKeyboardFocusService : NSObject <_SBKeyboardServiceConnectionListenerDelegate> {
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<_SBSceneResolving> _sceneResolver;
    id<_SBKeyboardServiceConnectionListening> _serviceConnectionListener;
    NSHashTable *_focusRequestedScenes;
    NSMapTable *_lock_additionalDeferringRulesByClient;
    NSMapTable *_lock_externalSceneIdentitiesByClient;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clientDidDisconnect:(id)a0;
- (void)clientDidConnect:(id)a0;
- (void).cxx_destruct;
- (void)_lock_updateExternalSceneIdentities;
- (void)client:(id)a0 deferAdditionalEnvironments:(id)a1 whenSceneHasKeyboardFocus:(id)a2 pid:(id)a3;
- (void)client:(id)a0 removeKeyboardFocusFromSceneIdentity:(id)a1 pid:(id)a2;
- (void)client:(id)a0 requestKeyboardFocusForSceneIdentity:(id)a1 pid:(id)a2 completion:(id /* block */)a3;
- (void)client:(id)a0 setExternalSceneIdentities:(id)a1;
- (void)client:(id)a0 stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)a1 pid:(id)a2;
- (id)initWithKeyboardFocusController:(id)a0 sceneResolver:(id)a1 serviceListenerFactory:(id)a2;
- (id)initWithKeyboardFocusController:(id)a0 systemUIScenesCoordinator:(id)a1;

@end
