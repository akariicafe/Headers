@class NSString, geo_isolater, NSXPCConnection;
@protocol GEOAPXPCDaemonExporting;

@interface GEOAPServiceRemote : NSObject <GEOAPServiceProxy> {
    NSXPCConnection *_conn;
    id<GEOAPXPCDaemonExporting> _daemonSvc;
    geo_isolater *_xpcIso;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_sharedDaemonConnection;
- (void)flushEvalData;
- (void)reportDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 completion:(id /* block */)a4;
- (void)reportLogMsg:(id)a0 uploadBatchId:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)runAggregationTasks;
- (void)setEvalMode:(BOOL)a0;
- (void)showEvalDataWithVisitorBlock:(id /* block */)a0;

@end
