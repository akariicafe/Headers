@class UIViewController;
@protocol REMReminderCreationPublicViewController, REMReminderCreationViewServiceViewController;

@interface REMReminderCreationRemoteViewController : _UIRemoteViewController <REMReminderCreationRemoteViewController>

@property (weak, nonatomic) UIViewController<REMReminderCreationPublicViewController> *publicViewController;
@property (readonly, nonatomic, getter=viewServiceViewController) id<REMReminderCreationViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewHostDidDismiss;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServiceDidFinish;

@end
