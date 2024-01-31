@class NSString, NSArray, NSObject, UIViewController;
@protocol GKFriendRequestViewControllerDelegate;

@interface GKFriendRequestViewController : GKHostedViewController

@property (weak, nonatomic) UIViewController *requestingViewController;
@property (weak, nonatomic) NSObject<GKFriendRequestViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *friendCode;
@property (retain, nonatomic) NSString *friendSupportPageURL;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *chatGUID;

+ (void)addFriends:(id)a0;
+ (void)addFriends:(id)a0 recipients:(id)a1;
+ (void)presentAlertControllerOn:(id)a0 withMessage:(id)a1 andTitle:(id)a2;
+ (void)presentFriendRequestOn:(id)a0 forRecipients:(id)a1 withFriendCode:(id)a2 andFriendSupportPageURL:(id)a3;

- (id)init;
- (id)_presentingViewController;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)notifyDelegateOnWillFinish;
- (id)serviceSideViewControllerClassName;

@end
