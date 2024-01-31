@class _CDMutablePerfMetric, _DKSyncType, NSArray, _DKSyncHistory, NSDate, _DKSync2Policy, _DKSyncPeer;
@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation {
    id<_DKSyncLocalKnowledgeStorage> _localStorage;
    id<_DKSyncRemoteKnowledgeStorage> _transport;
    _DKSyncPeer *_me;
    _DKSync2Policy *_policy;
    _DKSyncType *_type;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
    NSArray *_streamNames;
    NSDate *_now;
    unsigned long long _batchNumber;
    _DKSyncHistory *_history;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)endOperation;

@end
