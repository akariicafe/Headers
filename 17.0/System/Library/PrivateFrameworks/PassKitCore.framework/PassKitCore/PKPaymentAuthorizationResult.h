@class NSString, PKPeerPaymentTransactionMetadata, NSArray, PKPaymentOrderDetails;

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;
@property (copy, nonatomic) NSString *localizedErrorMessageOverride;
@property (nonatomic) long long resultSource;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSArray *errors;
@property (retain, nonatomic) PKPaymentOrderDetails *orderDetails;

+ (id)sanitizedErrors:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0 errors:(id)a1;

@end
