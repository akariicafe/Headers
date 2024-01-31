@protocol HKHealthPrivacyServiceRemoteObjectPickerViewController, HKHealthPrivacyHostObjectPickerViewControllerDelegate;

@interface HKHealthPrivacyHostObjectPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteObjectPickerViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostObjectPickerViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)didFinishWithError:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setPromptSession:(id)a0;

@end
