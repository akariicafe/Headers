@class NSString, WBSPublicKeyCredentialIdentifier;

@interface SFAutoFillPasskeyIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *coreIdentifier;
@property (readonly, copy, nonatomic) NSString *credentialID;
@property (readonly, copy, nonatomic) NSString *groupID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoreIdentifier:(id)a0;

@end
