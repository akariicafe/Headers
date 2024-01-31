@class PKAddPaymentPassRequestConfiguration;
@protocol PKAddPaymentPassControllerDelegate;

@interface PKAddPaymentPassController : NSObject

@property (retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration;
@property (weak, nonatomic) id<PKAddPaymentPassControllerDelegate> delegate;

+ (Class)_desiredClass;
+ (BOOL)canAddPaymentPass;

- (id)init;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (id)initWithRequestConfiguration:(id)a0 delegate:(id)a1;

@end
