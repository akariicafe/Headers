@class NSString, PKServiceAddPassesViewController;

@interface PKAddPassesRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKServiceAddPassesViewControllerResultsDelegate, UIAdaptivePresentationControllerDelegate> {
    PKServiceAddPassesViewController *_controller;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (long long)preferredStatusBarStyle;
- (void)presentationControllerDidDismiss:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)a0;
- (void)viewController:(id)a0 ingestionDidFinishWithResult:(unsigned long long)a1;

@end
