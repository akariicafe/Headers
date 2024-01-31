@class NSString, UIViewController, UIScrollViewDelayedTouchesBeganGestureRecognizer;
@protocol UNNotificationContentExtension;

@interface _UNNotificationContentExtensionVendorViewController : UIViewController <_UNNotificationContentExtensionVendorContainer> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidationOnceFlag;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
}

@property (retain, nonatomic) UIViewController<UNNotificationContentExtension> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addChildViewController:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_willAppearInRemoteViewController:(id)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)delayed:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (id)_extensionBundleIdentifier;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)_invalidateExtensionContext;
- (void)_setupExtensionViewController:(id)a0;
- (id)notificationExtensionVendorContext;

@end
