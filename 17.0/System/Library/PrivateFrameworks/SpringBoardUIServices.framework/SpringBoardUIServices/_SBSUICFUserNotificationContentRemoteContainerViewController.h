@class NSString, UIViewController;
@protocol SBSUIUserNotificationContentProviding;

@interface _SBSUICFUserNotificationContentRemoteContainerViewController : UIViewController <_SBSUICFUserNotificationContentExtensionRemoteInterface> {
    BOOL _isLegacyContentViewController;
}

@property (retain, nonatomic) UIViewController<SBSUIUserNotificationContentProviding> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidateWithCompletion:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)addChildViewController:(id)a0;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)_trackChildViewController:(id)a0;
- (void)configureWithCompletion:(id /* block */)a0;
- (id)userNotificationContentExtensionContext;

@end
