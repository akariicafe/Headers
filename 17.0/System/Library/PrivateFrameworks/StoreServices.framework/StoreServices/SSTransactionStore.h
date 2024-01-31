@class NSCountedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSTransactionStore : NSObject {
    NSCountedSet *_transactionCount;
    NSMutableDictionary *_transactionStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)defaultStore;

- (id)init;
- (void)takeKeepAliveWithTransactionID:(id)a0;
- (void)releaseKeepAliveWithTransactionID:(id)a0;
- (void).cxx_destruct;

@end
