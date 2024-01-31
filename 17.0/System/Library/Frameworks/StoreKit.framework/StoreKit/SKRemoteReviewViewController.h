@class SKStoreReviewViewController, NSString;
@protocol SKRemoteReviewViewControllerDelegate;

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController>

@property (weak, nonatomic) id<SKRemoteReviewViewControllerDelegate> delegate;
@property (weak, nonatomic) SKStoreReviewViewController *reviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)didFinishWithResult:(id)a0 error:(id)a1;

@end
