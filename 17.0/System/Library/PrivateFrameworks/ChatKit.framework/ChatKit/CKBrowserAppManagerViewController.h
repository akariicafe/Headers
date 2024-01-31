@class NSString, UINavigationController, CKAppManagerViewController;
@protocol CKBrowserAppManagerViewControllerDelegate;

@interface CKBrowserAppManagerViewController : CKBrowserViewController <UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate, CKAppManagerViewControllerDelegate> {
    UINavigationController *_navController;
    CKAppManagerViewController *_appViewController;
}

@property (nonatomic) BOOL isManagingStickers;
@property (weak, nonatomic) id<CKBrowserAppManagerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (BOOL)isModalInPresentation;
- (BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)a0;
- (void)appManagerViewControllerDidFinish:(id)a0;
- (void)browserAppManagerDidSelectPlugin:(id)a0;
- (long long)browserPresentationStyle;
- (void)delegate_BrowserAppManagerDidSelectPlugin:(id)a0;
- (BOOL)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (id)parentTransitioningDelegate;
- (BOOL)shouldShowChatChrome;
- (BOOL)supportsQuickView;
- (BOOL)wantsDarkUI;
- (BOOL)wantsOpaqueUI;

@end
