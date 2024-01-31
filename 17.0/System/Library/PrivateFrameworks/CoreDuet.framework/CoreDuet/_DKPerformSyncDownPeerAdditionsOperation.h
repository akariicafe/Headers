@class _CDMutablePerfMetric, _DKSyncType, NSArray, _DKSyncHistory, NSDate, _DKSync2Policy, _DKSyncPeer;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage, _DKKeyValueStore;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_peer;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
    NSArray *_streamNames;
    BOOL _highPriority;
    _DKSyncHistory *_history;
    id<_DKKeyValueStore> _keyValueStore;
    NSDate *_startDate;
    NSDate *_highWaterMark;
    unsigned long long _batchNumber;
    NSArray *_overlappingWindows;
    BOOL _foundAdditions;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)endOperation;

@end
