@class NSDictionary, CKServerChangeToken, NSData;

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation

@property (nonatomic) long long changeTypes;
@property (nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long resultStatus;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordDeletedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;

- (void)_noteCompletedURLRequest:(id)a0 withSchedulerInfo:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)pipeliningDescription;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)analyticsPayload;
- (int)operationType;
- (id)activityCreate;
- (void)_noteOperationEnding;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)a0 optionsByZoneID:(id)a1;
- (void)_noteDeletedRecordWithID:(id)a0 recordType:(id)a1;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void).cxx_destruct;
- (void)_noteChangedRecordWithID:(id)a0 record:(id)a1 error:(id)a2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)a0;

@end
