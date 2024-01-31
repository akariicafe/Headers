@protocol HKHealthPrivacyHostAuthorizationControllerDelegate, HKHealthPrivacyServiceRemoteAuthorizationViewController;

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)show;
- (void)didFinishWithError:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (void)setRequestRecord:(id)a0 presentationRequests:(id)a1;

@end
