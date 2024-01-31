@class NSArray, NSMutableSet, NSMutableDictionary;
@protocol CKModifyRecordAccessOperationCallbacks;

@interface CKDModifyRecordAccessOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordIDsToGrant;
@property (retain, nonatomic) NSArray *recordIDsToRevoke;
@property (retain, nonatomic) NSMutableSet *fetchedRecordIDs;
@property (retain, nonatomic) NSMutableDictionary *recordsToSaveByID;
@property (nonatomic) int numSaveAttempts;
@property (retain, nonatomic) id<CKModifyRecordAccessOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ accessWasGrantedBlock;
@property (copy, nonatomic) id /* block */ accessWasRevokedBlock;

+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (struct _PCSIdentityData { } *)_copyShareProtectionFromRecord:(id)a0 error:(id *)a1;
- (void)_fetchRecords;
- (void)_handleRecordFetched:(id)a0 recordID:(id)a1 error:(id)a2;
- (void)_handleRecordSaved:(id)a0 error:(id)a1;
- (void)_saveRecords;

@end
