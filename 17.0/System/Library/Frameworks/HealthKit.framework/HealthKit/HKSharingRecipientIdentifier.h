@class NSUUID, NSString;

@interface HKSharingRecipientIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSUUID *invitationUUID;
@property (readonly, copy, nonatomic) NSString *clinicalAccountIdentifier;

+ (id)sharingRecipientIdentifierFromStringRepresentation:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithRecipientIdentifierType:(unsigned long long)a0 invitationUUID:(id)a1 clinicalAccountIdentifier:(id)a2;
- (id)initForClinicalAccountIdentifier:(id)a0;
- (id)initForInvitationUUID:(id)a0;

@end
