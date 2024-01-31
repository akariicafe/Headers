@class NSString, TPPBSecureElementIdentity, NSData, NSMutableArray, TPPBPeerStableInfoSetting;

@interface TPPBPeerStableInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; unsigned char flexiblePolicyVersion : 1; unsigned char frozenPolicyVersion : 1; unsigned char userControllableViewStatus : 1; unsigned char isInheritedAccount : 1; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (nonatomic) BOOL hasFrozenPolicyVersion;
@property (nonatomic) unsigned long long frozenPolicyVersion;
@property (readonly, nonatomic) BOOL hasFrozenPolicyHash;
@property (retain, nonatomic) NSString *frozenPolicyHash;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasRecoverySigningPublicKey;
@property (retain, nonatomic) NSData *recoverySigningPublicKey;
@property (readonly, nonatomic) BOOL hasRecoveryEncryptionPublicKey;
@property (retain, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL hasFlexiblePolicyVersion;
@property (nonatomic) unsigned long long flexiblePolicyVersion;
@property (readonly, nonatomic) BOOL hasFlexiblePolicyHash;
@property (retain, nonatomic) NSString *flexiblePolicyHash;
@property (retain, nonatomic) NSMutableArray *policySecrets;
@property (nonatomic) BOOL hasUserControllableViewStatus;
@property (nonatomic) int userControllableViewStatus;
@property (retain, nonatomic) NSMutableArray *custodianRecoveryKeys;
@property (readonly, nonatomic) BOOL hasSecureElementIdentity;
@property (retain, nonatomic) TPPBSecureElementIdentity *secureElementIdentity;
@property (readonly, nonatomic) BOOL hasWalrus;
@property (retain, nonatomic) TPPBPeerStableInfoSetting *walrus;
@property (readonly, nonatomic) BOOL hasWebAccess;
@property (retain, nonatomic) TPPBPeerStableInfoSetting *webAccess;
@property (nonatomic) BOOL hasIsInheritedAccount;
@property (nonatomic) BOOL isInheritedAccount;

+ (Class)custodianRecoveryKeysType;
+ (Class)policySecretsType;

- (unsigned long long)hash;
- (unsigned long long)policySecretsCount;
- (BOOL)readFrom:(id)a0;
- (void)clearCustodianRecoveryKeys;
- (void)clearPolicySecrets;
- (int)StringAsUserControllableViewStatus:(id)a0;
- (void)writeTo:(id)a0;
- (id)userControllableViewStatusAsString:(int)a0;
- (unsigned long long)custodianRecoveryKeysCount;
- (id)policySecretsAtIndex:(unsigned long long)a0;
- (id)custodianRecoveryKeysAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPolicySecrets:(id)a0;
- (void)addCustodianRecoveryKeys:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
