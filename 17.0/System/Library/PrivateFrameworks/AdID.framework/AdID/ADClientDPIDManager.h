@class NSDate, CKRecordID, NSString, NSObject, CKRecordZoneID, NSMutableArray, CKContainer;
@protocol OS_dispatch_queue;

@interface ADClientDPIDManager : NSObject {
    NSObject<OS_dispatch_queue> *_backupFlowQueue;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKRecordID *recordIDLegacy;
@property (retain, nonatomic) CKContainer *privateContainer;
@property (nonatomic) BOOL isPrivateContainerSecure;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSString *DPID;
@property (nonatomic) BOOL updateInProgress;
@property (retain, nonatomic) NSMutableArray *operationsInProgress;
@property (nonatomic) BOOL sandboxEnvironment;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property unsigned long long dpidReconcileState;
@property (retain) NSDate *dpidReconcileStartDate;
@property (readonly, nonatomic) BOOL isTest;

+ (id)sharedInstance;
+ (id)DPIDOperationTypeToString:(unsigned long long)a0;

- (void)startOperation:(unsigned long long)a0;
- (id)containerWithIDString:(id)a0;
- (BOOL)iCloudAccountSubscribed;
- (id)init;
- (void)setupLocalDPID;
- (void)continueReconcileWithAccountStatus:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (BOOL)canContinueProcessing:(id)a0;
- (void)saveDPIDtoiCloud:(id)a0 completionHandler:(id /* block */)a1;
- (void)handlePushNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeDPIDtoKeychain;
- (void)finishOperation:(unsigned long long)a0;
- (BOOL)shouldSyncDPID;
- (id)secureContainer;
- (id)primaryiCloudAccountAltDSID;
- (void)resetEncryptedZone:(id /* block */)a0;
- (unsigned long long)primaryiCloudAccountSecurityLevel;
- (void)updateActiveRecordICloudDSID;
- (void)backupFlowForCloudKitWorkAtTime:(id)a0 with:(id /* block */)a1;
- (void)resolveAccountVsStoredManateeState:(long long)a0 andError:(id)a1 with:(id /* block */)a2;
- (BOOL)isRestrictedByApple;
- (BOOL)canGenerateDPID;
- (BOOL)isLoggedIntoiTunes;
- (BOOL)devicePersonalizedAdsEnabled;
- (void).cxx_destruct;
- (void)fetchDPIDfromiCloud:(id /* block */)a0;
- (void)setupiCloudSubscription:(id /* block */)a0;
- (void)createErrorForPrivateDB:(id)a0 completionHandler:(id /* block */)a1;
- (void)setiCloudAccountSubscribed:(BOOL)a0;
- (id)generateDPID;
- (id)subscriptionIdentifier;
- (id)operationQueueLog;
- (void)resetDPID:(id /* block */)a0;
- (id)insecureContainer;
- (void)syncDPIDWithiCloud:(id /* block */)a0;
- (void)teardowniCloudSubscription:(id /* block */)a0;
- (void)retryIfNeeded:(id /* block */)a0;
- (id)conformDPIDToUseWithRecord:(id)a0 legacyRecord:(id)a1;
- (void)removeDPIDfromiCloud:(id /* block */)a0;
- (void)reconcileDPID:(id /* block */)a0;
- (void)handleCloudKitError:(id)a0;

@end
