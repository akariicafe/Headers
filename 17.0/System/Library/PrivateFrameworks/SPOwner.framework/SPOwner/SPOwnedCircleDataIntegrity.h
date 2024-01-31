@class NSArray, SPSharedSecretsDataCheck, SPDataIntegrityCheck;

@interface SPOwnedCircleDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *circleRecord;
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
- (id)initWithCircleRecord:(id)a0 peerTrusts:(id)a1 sharedSecrets:(id)a2 keySyncRecord:(id)a3 observations:(id)a4 itemSharingKey:(id)a5 estimatedLocations:(id)a6;

@end
