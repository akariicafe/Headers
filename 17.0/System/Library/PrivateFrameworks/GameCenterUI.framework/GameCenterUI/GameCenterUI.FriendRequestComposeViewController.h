@interface GameCenterUI.FriendRequestComposeViewController : MFMessageComposeViewController <MFMessageComposeViewControllerDelegate> {
    void /* unknown type, empty encoding */ friendCode;
    void /* unknown type, empty encoding */ friendSupportPageURL;
    void /* unknown type, empty encoding */ isMessageSent;
    void /* unknown type, empty encoding */ isFriendCodeCancelled;
}

- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
