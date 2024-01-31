@class NSSet, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone

@property (readonly, nonatomic) BOOL useAnonymousRequests;
@property (readonly, nonatomic) NSSet *watchedRecordIDs;
@property (readonly, nonatomic) NSArray *signatureVerificationPublicKeys;
@property (retain, nonatomic) NSSet *modifiedRecordIDsFromLastPull;
@property (retain, nonatomic) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull;

+ (id)__calculateDigestDataFromRecord:(id)a0 dataKey:(id)a1 dataAssetKey:(id)a2 maxDataSize:(unsigned long long)a3 error:(id *)a4;
+ (id)__createBaseAccessoryIdentifierFromRecord:(id)a0 error:(id *)a1;
+ (id)__getDataFromRecord:(id)a0 dataKey:(id)a1 dataAssetKey:(id)a2 maxDataSize:(unsigned long long)a3 error:(id *)a4;
+ (id)__getSignatureDataFromRecord:(id)a0 signatureKey:(id)a1 signatureAssetKey:(id)a2 maxSignatureSize:(unsigned long long)a3 error:(id *)a4;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadata;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;
+ (unsigned long long)__maxSizeForCKRecordString;
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)a0 defaultValue:(unsigned long long)a1;
+ (BOOL)__verifyDataFromRecord:(id)a0 signatureVerificationPublicKeys:(id)a1 dataKey:(id)a2 dataAssetKey:(id)a3 maxDataSize:(unsigned long long)a4 signatureKey:(id)a5 signatureAssetKey:(id)a6 maxSignatureSize:(unsigned long long)a7 baseAccessoryIdentifier:(id *)a8 data:(id *)a9 error:(id *)a10;
+ (BOOL)__verifyDigestDataAgainstSignatureFromRecord:(id)a0 digestData:(id)a1 signatureData:(id)a2 signatureVerificationPublicKeys:(id)a3 error:(id *)a4;
+ (BOOL)verifyNetworkDeclarationsFromRecord:(id)a0 signatureVerificationPublicKeys:(id)a1 baseAccessoryIdentifier:(id *)a2 data:(id *)a3 error:(id *)a4;
+ (BOOL)verifyNetworkDeclarationsFromRecord:(id)a0 signatureVerificationPublicKeys:(id)a1 error:(id *)a2;
+ (BOOL)verifyPairedMetadataFromRecord:(id)a0 signatureVerificationPublicKeys:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)fetchChangesWithToken:(id)a0 options:(id)a1;
- (void)startUpWithLocalZone:(id)a0;
- (void)__zoneFetchCompletedWithChangeToken:(id)a0 error:(id)a1 moreComing:(BOOL)a2 fetchInfo:(id)a3;
- (BOOL)__canRecoverFromError:(id)a0 fetchInfo:(id)a1;
- (BOOL)__commitLocalChanges:(id)a0 error:(id *)a1;
- (void)__fetchZoneChangesWithFetchInfo:(id)a0;
- (void)__finalizeUpdatedRecordIDs;
- (void)__noteUpdatedRecordID:(id)a0;
- (void)__recordChanged:(id)a0 fetchInfo:(id)a1;
- (void)__recordDeleted:(id)a0 recordType:(id)a1 fetchInfo:(id)a2;
- (void)__retryFetchWithFetchInfo:(id)a0;
- (void)__zoneChangeTokensUpdated:(id)a0 fetchInfo:(id)a1;
- (void)__zoneChangesCompleted:(id)a0 fetchInfo:(id)a1;
- (id)decodeModelFrom:(id)a0 recordSource:(unsigned long long)a1 error:(id *)a2;
- (id)initWithCloudDatabase:(id)a0 state:(id)a1 useAnonymousRequests:(BOOL)a2 watchedRecordIDs:(id)a3 signatureVerificationPublicKeys:(id)a4;

@end
