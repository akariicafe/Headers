@class NSString, LAAuthenticatorServiceConfiguration, _AuthorizationRemoteViewControllerHost;
@protocol LAAuthorizationViewControllerDelegate;

@interface LAAuthorizationViewController : UIViewController <_AuthorizationRemoteViewControllerHostDelegate> {
    _AuthorizationRemoteViewControllerHost *_remoteVC;
    id /* block */ _completion;
    LAAuthenticatorServiceConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) id<LAAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)_applicationDidEnterBackground:(id)a0;
- (long long)preferredStatusBarStyle;
- (long long)modalPresentationStyle;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)modalTransitionStyle;
- (void)didProvideAuthorizationRequirementWithReply:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)presentInContainerViewController:(id)a0;
- (void)sheetDidFinishWithError:(id)a0;

@end
