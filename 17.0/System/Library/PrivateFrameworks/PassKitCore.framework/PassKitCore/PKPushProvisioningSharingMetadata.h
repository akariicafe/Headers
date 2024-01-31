@class NSString, NSDate;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sharingInstanceIdentifier;
@property (copy, nonatomic) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier;
@property (nonatomic) unsigned long long securityOptions;
@property (readonly, nonatomic) BOOL allowProvisioningOnLockedDevice;
@property (retain, nonatomic) NSDate *createdAt;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)a0;

@end
