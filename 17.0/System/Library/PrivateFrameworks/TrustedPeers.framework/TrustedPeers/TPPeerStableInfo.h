@class TPPBPeerStableInfoSetting, NSString, NSDictionary, TPTypedSignedData, NSData, TPPBSecureElementIdentity, TPPolicyVersion;

@interface TPPeerStableInfo : NSObject

@property (retain, nonatomic) TPTypedSignedData *tsd;
@property (readonly, nonatomic) unsigned long long clock;
@property (readonly) TPPolicyVersion *frozenPolicyVersion;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion;
@property (readonly, nonatomic) NSDictionary *policySecrets;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSData *recoverySigningPublicKey;
@property (readonly, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (readonly, nonatomic) int syncUserControllableViews;
@property (readonly, nonatomic) TPPBSecureElementIdentity *secureElementIdentity;
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *walrusSetting;
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *webAccess;
@property (readonly, nonatomic) BOOL isInheritedAccount;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

+ (id)policySecretsFromPb:(id)a0;
+ (id)flexiblePolicyVersionFromPb:(id)a0;

- (id)initWithData:(id)a0 sig:(id)a1;
- (id)pb;
- (id)bestPolicyVersion;
- (id)description;
- (BOOL)checkSignatureWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPeerStableInfo:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithClock:(unsigned long long)a0 frozenPolicyVersion:(id)a1 flexiblePolicyVersion:(id)a2 policySecrets:(id)a3 syncUserControllableViews:(int)a4 secureElementIdentity:(id)a5 walrusSetting:(id)a6 webAccess:(id)a7 deviceName:(id)a8 serialNumber:(id)a9 osVersion:(id)a10 signingKeyPair:(id)a11 recoverySigningPubKey:(id)a12 recoveryEncryptionPubKey:(id)a13 isInheritedAccount:(BOOL)a14 error:(id *)a15;
- (BOOL)isEqual:(id)a0;

@end
