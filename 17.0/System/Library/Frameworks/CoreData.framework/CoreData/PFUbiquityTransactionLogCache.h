@class NSRecursiveLock, NSString, NSMutableDictionary, PFUbiquityGlobalObjectIDCache;

@interface PFUbiquityTransactionLogCache : NSObject {
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}

- (id)init;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)a0 andGlobalIDCache:(id)a1;

@end
