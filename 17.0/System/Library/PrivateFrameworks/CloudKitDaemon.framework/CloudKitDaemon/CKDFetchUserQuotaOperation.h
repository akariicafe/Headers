@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long quotaAvailable;
@property (retain, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;

@end
