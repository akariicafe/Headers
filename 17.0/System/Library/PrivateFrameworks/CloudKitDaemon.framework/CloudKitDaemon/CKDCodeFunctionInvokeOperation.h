@class NSData, NSString, NSArray, PCCKey, NSURL, CKDProtocolTranslator, CKDTrustedTargetKey, CKDTrustedTargetWrappedKey;
@protocol CKCodeOperationCallbacks;

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) PCCKey *pccKey;
@property (retain, nonatomic) NSArray *pccWrappedKeys;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (nonatomic) unsigned long long dataProtectionType;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (nonatomic) BOOL shouldSendRecordPCSKeys;
@property (copy, nonatomic) NSString *trustedTargetDomain;
@property (copy, nonatomic) NSString *trustedTargetOID;
@property (retain, nonatomic) CKDTrustedTargetKey *trustedTargetKey;
@property (retain, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedKey;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSArray *requestRecords;
@property (copy, nonatomic) NSData *serializedArguments;
@property (copy, nonatomic) NSData *serializedResponse;
@property (copy, nonatomic) NSArray *responseRecords;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (retain, nonatomic) id<CKCodeOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ replaceLocalSerializationsBlobs;
@property (copy, nonatomic) id /* block */ initialResponseReceivedCallback;
@property (copy, nonatomic) id /* block */ replaceWireSerializations;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ recordFetchProgressBlock;
@property (copy, nonatomic) id /* block */ recordFetchCommandBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;
+ (id)URLFromEntitlementString:(id)a0;
+ (id)entitlementURLForServiceName:(id)a0 container:(id)a1;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (id)encryptData:(id)a0;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;
- (void)_invokeFunction;
- (void)_checkShouldSendRecordPCSKeys;
- (void)_getDeserializedRecords;
- (void)_getSerializedRequest;
- (void)_invokeLocalFunction;
- (void)_postflightRecords;
- (void)_preflightRecords;
- (void)_prepareForProtectedCloudCompute;
- (void)_prepareForTrustedTargetEncryption;

@end
