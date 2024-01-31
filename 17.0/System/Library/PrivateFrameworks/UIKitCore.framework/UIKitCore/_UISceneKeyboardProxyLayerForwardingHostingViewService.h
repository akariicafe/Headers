@class NSString, _UIViewServiceViewControllerOperator;

@interface _UISceneKeyboardProxyLayerForwardingHostingViewService : NSObject <_UISceneKeyboardProxyLayerForwardingHostingEnvironment> {
    _UIViewServiceViewControllerOperator *_viewControllerOperator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_keyboardOwnerIdentityTokensForLayers:(id)a0;
- (void)addLayers:(id)a0;
- (void)removeLayers:(id)a0;

@end
