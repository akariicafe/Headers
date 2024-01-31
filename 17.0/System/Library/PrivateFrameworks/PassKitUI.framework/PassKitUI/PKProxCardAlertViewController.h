@class NSString;

@interface PKProxCardAlertViewController : SBUIRemoteAlertServiceViewController <PRXFlowDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_dismiss;
- (id)_proxCardControllerForRequest:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;
- (void)proxCardFlowDidDismiss;

@end
