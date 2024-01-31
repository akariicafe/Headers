@class NSString, NSData, NSDictionary;

@interface STSPaymentResponseBase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSData *transactionData;
@property (readonly, nonatomic) NSDictionary *certificates;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initFromNFECommercePaymentResponse:(id)a0;
- (id)initFromNFPeerPaymentResponse:(id)a0;

@end
