@class NSString, NCNotificationTextInputView, NCNotificationRequest, NSMutableArray, _UNNotificationContentExtensionHostContainerViewController;
@protocol NCNotificationCustomContentDelegate;

@interface NCNotificationContentContainerViewController : UIViewController <_UNNotificationContentExtensionHostContainerViewControllerDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent>

@property (retain, nonatomic) _UNNotificationContentExtensionHostContainerViewController *extensionContainerViewController;
@property (retain, nonatomic) NCNotificationTextInputView *inputAccessoryView;
@property (nonatomic) unsigned long long customContentLocation;
@property (retain, nonatomic) NSMutableArray *updatedActions;
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *title;
@property (weak, nonatomic) id<NCNotificationCustomContentDelegate> delegate;
@property (readonly, nonatomic) NSString *contentExtensionIdentifier;

+ (id)_defaultUIExtensionForNotificationRequest:(id)a0 visibleAttachment:(out id *)a1;
+ (id)_visibleAttachmentForNotificationRequest:(id)a0;
+ (id)extensionForNotificationRequest:(id)a0;

- (id)initWithNotificationRequest:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)userInteractionEnabled;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_textInputActionInNotification:(id)a0;
- (void)_forwardActionToExtension:(id)a0 forNotification:(id)a1 withUserInfo:(id)a2;
- (void)_loadExtensionContainerViewControllerForNotificationRequest:(id)a0;
- (void)_removeInputAccessoryView:(id)a0;
- (id)_responseForAction:(id)a0 notification:(id)a1 userInfo:(id)a2;
- (void)_setupExtensionContainerViewControllerController:(id)a0;
- (void)_setupQuickReplyForNotificationAction:(id)a0;
- (void)_setupQuickReplyForNotificationRequest:(id)a0;
- (BOOL)allowManualDismiss;
- (id)cancelTouches;
- (BOOL)defaultContentHidden;
- (BOOL)didReceiveNotificationRequest:(id)a0;
- (void)extensionViewControllerDidLoadExtension:(id)a0;
- (void)extensionViewControllerDidUpdateActions:(id)a0;
- (void)extensionViewControllerDidUpdateTitle:(id)a0;
- (void)extensionViewControllerRequestsDefaultAction:(id)a0;
- (void)extensionViewControllerRequestsDismiss:(id)a0;
- (void)notificationTextInputView:(id)a0 didConfirmText:(id)a1 forAction:(id)a2;
- (BOOL)overridesDefaultTitle;
- (BOOL)performAction:(id)a0 forNotification:(id)a1;
- (BOOL)performAction:(id)a0 forNotification:(id)a1 withUserInfo:(id)a2;
- (void)playMedia;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;

@end
