@class PKPaymentMerchantSession;

@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long status;
@property (retain, nonatomic) PKPaymentMerchantSession *session;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 merchantSession:(id)a1;

@end
