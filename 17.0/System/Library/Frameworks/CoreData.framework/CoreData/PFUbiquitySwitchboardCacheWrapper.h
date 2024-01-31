@class PFUbiquityLocation, NSString, NSLock, PFUbiquityKnowledgeVector, PFUbiquityPeerRangeCache, PFUbiquityPeerReceipt, PFUbiquityTransactionHistoryCache, PFUbiquityGlobalObjectIDCache, PFUbiquityTransactionLogCache;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_storeName;
    PFUbiquityGlobalObjectIDCache *_globalIDCache;
    PFUbiquityPeerRangeCache *_peerRangeCache;
    PFUbiquityTransactionLogCache *_transactionLogCache;
    PFUbiquityTransactionHistoryCache *_transactionHistoryCache;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_baselineKV;
    PFUbiquityPeerReceipt *_peerReceipt;
    BOOL _pendingReceiptWrite;
    NSLock *_receiptFileLock;
    BOOL _allowSchedulingOfReceiptFileWrites;
}

- (id)init;
- (void)dealloc;
- (void)_appWillResignActive:(id)a0;
- (id)initWithStoreName:(id)a0 privateStore:(id)a1 forLocalPeerID:(id)a2 andUbiquityRootLocation:(id)a3;

@end
