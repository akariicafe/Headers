@class NSString, PKPaymentRequestViewInterface, PKPaymentAuthorizationInterfaceConfiguration, PKPaymentAuthorizationContext, UIViewController;
@protocol PKPaymentAuthorizationServiceProtocol, BSInvalidatable;

@interface PKPaymentAuthorizationPaymentUIInterface : NSObject <SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    PKPaymentRequestViewInterface *_paymentUIInterface;
    id<BSInvalidatable> _lockButtonObserver;
}

@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (readonly, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (void)dealloc;
- (void)invalidate;
- (void)didAppear;
- (void).cxx_destruct;
- (void)consumeDoublePressUpForButtonKind:(long long)a0;
- (void)_stopObservingLockButtonPresses;
- (void)initializePrimaryViewController;
- (id)createPaymentUIInterfaceConfigurationWithContext:(id)a0 configuration:(id)a1;
- (void)_startObservingLockButtonPresses;
- (id)createPaymentUIInterfaceWithContext:(id)a0 configuration:(id)a1;
- (id)initWithContext:(id)a0 configuration:(id)a1;
- (void)willAppear;

@end
