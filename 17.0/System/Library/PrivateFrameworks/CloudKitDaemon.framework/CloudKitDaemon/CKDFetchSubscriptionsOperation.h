@class NSArray;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (retain, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ subscriptionFetchedProgressBlock;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (void)_handleSubscriptionFetched:(id)a0 withID:(id)a1 responseCode:(id)a2;

@end
