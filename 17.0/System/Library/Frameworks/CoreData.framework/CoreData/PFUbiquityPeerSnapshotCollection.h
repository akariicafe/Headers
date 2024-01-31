@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    BOOL _needSort;
}

- (id)init;
- (void)dealloc;

@end
