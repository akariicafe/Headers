@class NSMutableArray;
@protocol DATransactionMonitorDelegate;

@interface DATransactionMonitor : NSObject

@property (nonatomic) int transactionCount;
@property (retain, nonatomic) NSMutableArray *transactions;
@property (weak, nonatomic) id<DATransactionMonitorDelegate> transactionMonitorDelegate;

+ (id)sharedTransactionMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)decrementTransactionCountForTransaction:(id)a0;
- (void)incrementTransactionCountForTransaction:(id)a0;

@end
