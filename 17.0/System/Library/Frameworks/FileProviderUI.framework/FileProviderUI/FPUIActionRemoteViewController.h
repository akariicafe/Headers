@protocol FPUIActionRemoteViewControllerDelegate;

@interface FPUIActionRemoteViewController : _UIRemoteViewController

@property (weak, nonatomic) id<FPUIActionRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
