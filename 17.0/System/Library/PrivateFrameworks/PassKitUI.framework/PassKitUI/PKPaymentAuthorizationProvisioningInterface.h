@class NSString, PKPaymentAuthorizationInterfaceConfiguration, PKPaymentAuthorizationContext, UIViewController;
@protocol PKPaymentAuthorizationProvisioningInterfaceDelegate;

@interface PKPaymentAuthorizationProvisioningInterface : NSObject <PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
}

@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (weak, nonatomic) id<PKPaymentAuthorizationProvisioningInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createPrimaryViewController;
- (id)initWithContext:(id)a0 configuration:(id)a1;

@end
