@class NSString, PRUIExternallyHostedPosterEditingService, PRUIModalRemoteViewController;
@protocol PRUIInlinePosterEditingViewControllerDelegate, PRUIModalEntryPoint, PRUIExternallyHostedPosterEditingRequest;

@interface PRUIInlinePosterEditingViewController : UIViewController <PRUIModalRemoteViewControllerDelegate, PRUIExternallyHostedPosterEditingServiceDelegate, _PRUIInlinePosterEditingPlaceholderViewControllerDelegate> {
    id<PRUIModalEntryPoint> _entryPoint;
    id<PRUIExternallyHostedPosterEditingRequest> _remoteEditingRequest;
    PRUIExternallyHostedPosterEditingService *_remoteEditingService;
    PRUIModalRemoteViewController *_fallbackViewController;
}

@property (weak, nonatomic) id<PRUIInlinePosterEditingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (long long)preferredStatusBarUpdateAnimation;
- (id)initWithEntryPoint:(id)a0;
- (void)_shared_didDismissWithResponse:(id)a0;
- (void)_getEditingViewControllerIfPossible;
- (BOOL)_isPresentingRemoteOrLocalEditingUI;
- (void)_shared_willDismissWithResponse:(id)a0;
- (void)didEndEditingWithResponse:(id)a0;
- (void)modalRemoteViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)modalRemoteViewController:(id)a0 willDismissWithResponse:(id)a1;
- (void)placeholderViewController:(id)a0 requestsDismissalWithAnimation:(BOOL)a1;
- (void)sendRequestDismissalAction;
- (void)willEndEditingWithResponse:(id)a0;

@end
