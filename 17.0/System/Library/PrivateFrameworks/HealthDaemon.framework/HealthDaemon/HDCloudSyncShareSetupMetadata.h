@class CKShareParticipant, NSString, NSArray, NSDictionary, HKProfileIdentifier;

@interface HDCloudSyncShareSetupMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL;
@property (readonly, copy, nonatomic) NSString *ownerCloudKitEmailAddress;
@property (readonly, copy, nonatomic) CKShareParticipant *shareParticipant;

+ (id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)a0 error:(id *)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSyncCircleIdentifier:(id)a0 profileIdentifier:(id)a1 shareURLs:(id)a2 ownerCloudKitEmailAddress:(id)a3 shareParticipant:(id)a4 invitationTokensByShareURL:(id)a5;
- (id)codableSharingSetupMetadataWithError:(id *)a0;

@end
