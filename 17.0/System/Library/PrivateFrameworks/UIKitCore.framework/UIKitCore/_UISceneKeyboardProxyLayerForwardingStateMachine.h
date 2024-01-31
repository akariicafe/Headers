@class NSString, UIWindow, NSSet;
@protocol _UISceneKeyboardProxyLayerForwardingPresentationEnvironment, _UISceneKeyboardProxyLayerForwardingHostingEnvironment;

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIWindowLevelObserver, _UISceneKeyboardProxyLayerForwardingPresentationEnvironmentObserver> {
    id<_UISceneKeyboardProxyLayerForwardingPresentationEnvironment> _presentationEnvironment;
    id<_UISceneKeyboardProxyLayerForwardingHostingEnvironment> _hostingEnvironment;
    unsigned long long _state;
    id _windowDidMoveToSceneNotificationToken;
    UIWindow *_hostingWindow;
    NSSet *_keyboardLayersTracked;
    NSSet *_keyboardLayersAddedToHostingEnvironment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)_state;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)window:(id)a0 changedFromLevel:(double)a1 toLevel:(double)a2;
- (id)succinctDescription;
- (id)_newProxyLayers;
- (void)noteKeyboardLayersBeingTracked:(id)a0;
- (void)_addLayers:(id)a0 toEnvironment:(id)a1;
- (void)_noteHostedInWindow:(id)a0;
- (void)_removeLayers:(id)a0 fromEnvironment:(id)a1;
- (id)hostingEnvironmentForWindow:(id)a0;
- (id)initWithPresentationEnvironment:(id)a0;
- (void)presentationEnvironment:(id)a0 didMoveToWindow:(id)a1;
- (void)presentationEnvironmentDidInvalidate:(id)a0;
- (void)presentationEnvironmentDidUpdateKeyboardLayers:(id)a0;

@end
