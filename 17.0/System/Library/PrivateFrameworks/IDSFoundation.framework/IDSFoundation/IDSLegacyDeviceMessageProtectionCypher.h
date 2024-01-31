@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *publicIdentity;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cypherWithEndpoint:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublicIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_fullIdentityFromAccountIdentity:(id)a0 error:(id *)a1;
- (id)cypherData:(id)a0 withAccountIdentity:(id)a1 identifier:(id *)a2 error:(id *)a3;
- (id)decypherData:(id)a0 withAccountIdentity:(id)a1 signingDevicePublicKey:(id)a2 identifier:(id)a3 error:(id *)a4;

@end
