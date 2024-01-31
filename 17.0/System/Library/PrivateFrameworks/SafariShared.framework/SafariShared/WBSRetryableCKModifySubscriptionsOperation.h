@class NSArray;

@interface WBSRetryableCKModifySubscriptionsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;

- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
