@class NSString, FBKSForm_FrameworkPrivateName;

@interface FBKSForm : NSObject

@property (retain, nonatomic) FBKSForm_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long authenticationMethod;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)prefill:(id)a0 answer:(id)a1;

@end
