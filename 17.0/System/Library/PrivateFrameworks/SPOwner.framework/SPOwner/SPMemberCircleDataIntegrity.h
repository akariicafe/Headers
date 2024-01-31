@class NSArray, SPSharedSecretsDataCheck, SPDataIntegrityCheck;

@interface SPMemberCircleDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *circleRecord;
@property (copy, nonatomic) SPDataIntegrityCheck *sharedBeaconRecord;
@property (copy, nonatomic) SPDataIntegrityCheck *sharedBeaconNameRecord;
@property (copy, nonatomic) SPDataIntegrityCheck *sharedBeaconOwnerName;
@property (copy, nonatomic) NSArray *peerTrusts;
@property (copy, nonatomic) SPSharedSecretsDataCheck *sharedSecrets;
@property (copy, nonatomic) SPDataIntegrityCheck *keySyncRecord;
@property (copy, nonatomic) NSArray *observations;
@property (copy, nonatomic) NSArray *itemSharingKey;
@property (copy, nonatomic) NSArray *estimatedLocations;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCircleRecord:(id)a0 sharedBeaconRecord:(id)a1 sharedBeaconNameRecord:(id)a2 sharedBeaconOwnerName:(id)a3 peerTrusts:(id)a4 sharedSecrets:(id)a5 keySyncRecord:(id)a6 observations:(id)a7 itemSharingKey:(id)a8 estimatedLocations:(id)a9;

@end
