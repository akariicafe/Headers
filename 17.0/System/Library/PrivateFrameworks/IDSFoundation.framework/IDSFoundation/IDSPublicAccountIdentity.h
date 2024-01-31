@class IDSMPPublicAccountIdentity, NSString, IDSMPPublicServiceIdentitySigning, IDSMPPublicServiceIdentityAdmin;

@interface IDSPublicAccountIdentity : NSObject <ENAccountPublicKey>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSMPPublicAccountIdentity *accountIdentity;
@property (readonly, nonatomic) IDSMPPublicServiceIdentityAdmin *adminIdentity;
@property (readonly, nonatomic) IDSMPPublicServiceIdentitySigning *signingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccountIdentity:(id)a0 adminIdentity:(id)a1 signingIdentity:(id)a2;

@end
