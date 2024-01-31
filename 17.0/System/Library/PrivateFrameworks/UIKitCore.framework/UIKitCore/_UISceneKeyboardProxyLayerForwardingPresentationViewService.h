@class NSString, NSHashTable, _UIRemoteViewController, FBSSceneIdentityToken;

@interface _UISceneKeyboardProxyLayerForwardingPresentationViewService : NSObject <_UISceneKeyboardProxyLayerForwardingPresentationEnvironment> {
    NSHashTable *_observers;
    _UIRemoteViewController *_remoteViewController;
}

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwnerIdentityToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)forwardsLayersToRootSystemShell;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)keyboardLayers;

@end
