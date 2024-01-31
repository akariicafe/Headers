@class NSString, NSDictionary, NSData, NSArray;

@interface NFECommercePaymentResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, retain, nonatomic) NSData *transactionData;
@property (readonly, retain, nonatomic) NSDictionary *certs;
@property (readonly, retain, nonatomic) NSArray *SEPcerts;
@property (readonly, retain, nonatomic) NSData *confirmationBlobHash;
@property (readonly, retain, nonatomic) NSData *confirmationBlobSignature;
@property (readonly, nonatomic) long long confirmationBlobVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setCerts:(id)a0;
- (void)setConfirmationBlobHash:(id)a0 withSignature:(id)a1 version:(unsigned long long)a2;
- (void)setSEPCerts:(id)a0;

@end
