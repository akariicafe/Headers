@class _PFUbiquityStack, NSString, PFUbiquityPeer, PFUbiquityTransactionLog, PFUbiquityKnowledgeVector, PFUbiquityStoreMetadata, NSDictionary, NSMutableDictionary, PFUbiquitySwitchboardCacheWrapper, PFUbiquityBaselineHeuristics, PFUbiquityStoreSaveSnapshot;

@interface PFUbiquityImportContext : NSObject {
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_actingPeer;
    PFUbiquityKnowledgeVector *_kv;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSString *_exportingPeerID;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_storeSaveSnapshot;
    NSDictionary *_globalIDToLocalIDURICache;
    NSMutableDictionary *_globalIDToFetchedObject;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityBaselineHeuristics *_heuristics;
}

- (id)init;
- (void)dealloc;
- (id)initWithStack:(id)a0 andStoreMetadata:(id)a1;
- (id)initWithStoreName:(id)a0 andUbiquityRootLocation:(id)a1 withLocalPeerID:(id)a2;

@end
