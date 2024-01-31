@class SKComposeReviewViewController, NSString;

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>

@property (weak, nonatomic) SKComposeReviewViewController *composeReviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)_keyboardVisibilityDidChangeNotification:(id)a0;
- (void)didFinishWithResult:(id)a0 error:(id)a1;
- (void)didPrepareWithResult:(id)a0 error:(id)a1;
- (void)promptForStarRating;

@end
