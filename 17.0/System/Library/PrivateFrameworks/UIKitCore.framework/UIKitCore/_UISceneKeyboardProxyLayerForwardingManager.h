@class NSString, NSMapTable;

@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <_UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver> {
    NSMapTable *_mapEnvironmentToKeyboardForwardingStateMachine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)new;
+ (BOOL)isRootSystemShellProcess;

- (id)init;
- (id)_init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)_newStateMachineWithPresentationEnvironment:(id)a0;
- (id)_stateMachineForPresentationEnvironment:(id)a0;
- (void)_updateKeyboardLayersForPresentationEnvironment:(id)a0;
- (void)presentationEnvironmentDidInvalidate:(id)a0;
- (void)trackPresentationEnvironment:(id)a0;

@end
