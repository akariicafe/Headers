@class NSString, SBSCardItem;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver> {
    SBSCardItem *_cardItem;
    id /* block */ _pluginCompletionBlock;
}

@property (nonatomic) BOOL shouldForwardAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)executeAction:(id)a0 fromOrigin:(id)a1 endpoint:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)didDismissLockScreenPlugin:(id)a0;
- (void)didPresentLockScreenPlugin:(id)a0;
- (void)willDismissLockScreenPlugin:(id)a0;
- (void)willPresentLockScreenPlugin:(id)a0;

@end
