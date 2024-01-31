@class PKAppletSubcredentialSharingRequest, PKRemoteSubcredentialMessageComposeViewController, _UIAsyncInvocation;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKSubcredentialMessageComposeViewController : UIViewController {
    id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;
    _UIAsyncInvocation *_remoteVCRequest;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKRemoteSubcredentialMessageComposeViewController *_remoteVC;
}

@property (weak, nonatomic) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (long long)modalTransitionStyle;
- (id)initWithCoder:(id)a0;
- (void)_setRemoteVC:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSharingRequest:(id)a0 delegate:(id)a1;

@end
