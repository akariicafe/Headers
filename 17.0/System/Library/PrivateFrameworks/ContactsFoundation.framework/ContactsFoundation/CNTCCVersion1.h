@class NSNumber;

@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>

@property (retain, nonatomic) NSNumber *simulateStatus;
@property (retain, nonatomic) NSNumber *isUnitTestingCachedValue;

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)a0 bundleIdentifier:(id)a1;

- (BOOL)isUnitTesting;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)a0;
- (void)saveAuthorizationRecord:(id)a0;
- (id)isUnitTestingImpl;
- (id)authorizationRecordForBundleIdentifier:(id)a0;
- (void)requestAuthorization:(long long)a0 auditToken:(id)a1 assumedIdentity:(id)a2 completionHandler:(id /* block */)a3;
- (id)authorizationRecords;
- (void)simulateStatus:(long long)a0;
- (long long)checkAuthorizationStatusOfAuditToken:(id)a0 assumedIdentity:(id)a1;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (void).cxx_destruct;
- (BOOL)isAuthorizationRestricted;
- (void)stopSimulation;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x0[8]; })a0;

@end
