@class CPLEngineScope, CPLTransportScopeMapping, NSDate, NSObject;
@protocol OS_dispatch_queue, CPLEngineTransportGroup, CPLEngineTransportReshareRecordsTask;

@interface CPLReshareScopeTask : CPLEngineScopedTask {
    NSDate *_cutoffDate;
    CPLEngineScope *_primaryScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportReshareRecordsTask> _reshareTask;
    id<CPLEngineTransportGroup> _transportGroup;
    BOOL _hasScheduledPullFromTransport;
}

- (id)taskIdentifier;
- (void)launch;
- (void).cxx_destruct;
- (void)cancel;
- (void)_doOneIteration;
- (void)_bumpIgnoredDatesOfRecords:(id)a0 hasResharedSomeRecords:(BOOL)a1;
- (void)_bumpIgnoredDatesOfRejectedRecords:(id)a0;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (id)scopesForTask;

@end
