@class NSString, ASPolicy, NSDictionary;

@interface ASProvisionTask : ASTask

@property (nonatomic) int type;
@property (nonatomic) BOOL accountOnlyRemoteWipeSuccess;
@property (retain, nonatomic) ASPolicy *policy;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *deviceInfo;

- (id)requestBody;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)processContext:(id)a0;
- (id)_initWithType:(int)a0 policy:(id)a1 key:(id)a2;
- (id)_initWithType:(int)a0 policy:(id)a1 key:(id)a2 accountOnlyRemoteWipeSuccess:(BOOL)a3;
- (id)_policyID;
- (id)_provisioningType;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)a0 withKey:(id)a1 accountOnlyRemoteWipeSuccess:(BOOL)a2;
- (id)initWithOriginalKeyForPolicyRequest:(id)a0;
- (id)initWithPolicyAcknowledgement:(id)a0 withKey:(id)a1;
- (id)initWithRemoteWipeAcknowledgement:(id)a0 withKey:(id)a1;
- (BOOL)requiresEASVersionUpdate;
- (long long)taskStatusForExchangeStatus:(int)a0;

@end
