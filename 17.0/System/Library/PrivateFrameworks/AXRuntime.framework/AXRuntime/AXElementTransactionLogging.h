@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AXElementTransactionLogging : NSObject {
    NSMutableDictionary *_pendingTransactions;
    NSMutableDictionary *_pidsToBundleIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedLogger;
+ (id)transactionSummary;

- (id)init;
- (void).cxx_destruct;
- (void)failedTransaction:(unsigned long long)a0;
- (id)_appNameForUIElement:(struct __AXUIElement { } *)a0 pid:(int)a1;
- (void)finishedTransaction:(unsigned long long)a0 withValue:(void *)a1;
- (void)finishedTransaction:(unsigned long long)a0 withValue:(void *)a1 amortization:(double)a2;
- (unsigned long long)willFetchAttribute:(long long)a0 forElement:(struct __AXUIElement { } *)a1;

@end
