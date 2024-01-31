@class NSString, NSMutableDictionary;

@interface AXRemoteUIAlertManager : NSObject <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) NSMutableDictionary *remoteCallbackHolders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)_sbs_presentRemoteUIAlertWithIdentifier:(id)a0 viewControllerClassName:(id)a1 userInfo:(id)a2 presentationHandler:(id /* block */)a3 dismissalHandler:(id /* block */)a4;
- (void)presentRemoteUIAlertWithIdentifier:(id)a0 viewControllerClassName:(id)a1 userInfo:(id)a2 presentationHandler:(id /* block */)a3 dismissalHandler:(id /* block */)a4;

@end
