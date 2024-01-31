@class NSData, PKTransactionAuthenticationContext, NSString;

@interface PKTransactionAuthenticationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKTransactionAuthenticationContext *authenticationContext;
@property (copy, nonatomic) NSData *encryptedPIN;
@property (copy, nonatomic) NSData *transactionDetailsSignature;
@property (copy, nonatomic) NSData *userConfirmation;
@property (copy, nonatomic) NSString *transactionServiceIdentifier;
@property (readonly, nonatomic) BOOL hasDataForAllRequestedAuthenticationMechanisms;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToTransactionAuthenticationResult:(id)a0;

@end
