@class NSData;

@interface PKIdentityProvisioningTransactionKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *casdAttestation;
@property (readonly, nonatomic) NSData *authorization;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCASDAttestation:(id)a0 authorization:(id)a1;

@end
