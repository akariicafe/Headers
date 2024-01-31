@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction

@property (copy, nonatomic) NSString *notificationName;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)a0 notificationName:(id)a1 delegate:(id)a2;
- (void)performWorkWithCompletion:(id /* block */)a0;

@end
