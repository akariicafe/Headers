@class NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    BOOL _hasZoneSaves;
    BOOL _hasZoneDeletes;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (id)relevantZoneIDs;
- (BOOL)isOperationType:(int)a0;
- (BOOL)makeStateTransition;
- (BOOL)supportsClearAssetEncryption;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_sendCoreAnalyticsEventForKeySync;
- (id)activityCreate;
- (void)main;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2 expirationDate:(id)a3 expired:(BOOL)a4;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchPCSDataForZone:(id)a0 fromServer:(BOOL)a1;
- (void)_checkAndPrepareZones;
- (void).cxx_destruct;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)a0;
- (void)_sendErrorForFailedZones;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (BOOL)_saveZonesToServer;
- (void)_synchronizeUserKeyRegistryIfNeeded;

@end
