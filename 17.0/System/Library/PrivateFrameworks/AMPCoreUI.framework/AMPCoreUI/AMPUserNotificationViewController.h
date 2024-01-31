@class AMPUserNotificationContentViewController, NSString, UIColor;
@protocol AMSURLBagContract;

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate, UNNotificationContentExtension>

@property (retain, nonatomic) AMPUserNotificationContentViewController *contentViewController;
@property (retain, nonatomic) id<AMSURLBagContract> bagContract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } mediaPlayPauseButtonFrame;
@property (readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;

+ (id)userNotificationFromNotification:(id)a0;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)didReceiveNotification:(id)a0;
- (void)didReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)openNotification;
- (void)renderUserNotification:(id)a0;
- (void)viewController:(id)a0 didUpdatePreferredContentSize:(struct CGSize { double x0; double x1; })a1;

@end
