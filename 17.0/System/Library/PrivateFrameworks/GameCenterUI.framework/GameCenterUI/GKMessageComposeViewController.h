@protocol GKMessageComposeViewControllerDelegate;

@interface GKMessageComposeViewController : MFMessageComposeViewController

@property (weak, nonatomic) id<GKMessageComposeViewControllerDelegate> gkComposeDelegate;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;

@end
