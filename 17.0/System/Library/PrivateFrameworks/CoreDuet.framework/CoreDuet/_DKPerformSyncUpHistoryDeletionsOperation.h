@class NSDate, NSArray, _DKPerformSyncUpHistoryAdditionsOperation, _DKSyncHistory, _DKSyncPeer, _DKSyncType, _CDMutablePerfMetric, _DKSync2Policy;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryDeletionsOperation : _DKSyncCompositeOperation {
    _DKPerformSyncUpHistoryAdditionsOperation *_sibling;
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    _DKSyncHistory *_history;
    unsigned long long _batchNumber;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)endOperation;

@end
