@class NSString, UIAlertController;
@protocol GKFriendRequestComposeViewControllerDelegate;

@interface GKFriendRequestComposeViewController : UINavigationController

@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic) unsigned int rid;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<GKFriendRequestComposeViewControllerDelegate> composeViewDelegate;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (unsigned long long)maxNumberOfRecipients;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)_addRecipientInternals:(id)a0;
- (void)_setupChildViewController;
- (void)addRecipientPlayers:(id)a0;
- (void)addRecipientsWithEmailAddresses:(id)a0;
- (void)addRecipientsWithPlayerIDs:(id)a0;
- (void)prepareForNewRecipients:(id)a0;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)a0;

@end
