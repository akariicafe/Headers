@class NSObject, GTBulkDataService, GTServiceProperties;
@protocol GTURLAccessProvider, OS_os_log, GTMTLReplayService;

@interface GTMTLReplayServiceXPCDispatcher : GTXPCDispatcher <GTMTLReplayServiceXPCDispatcher> {
    id<GTMTLReplayService> _implInstance;
    id<GTURLAccessProvider> _URLAccessService;
    GTBulkDataService *_bulkDataService;
    GTServiceProperties *_bulkDataServiceProperties;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)bulkDataService:(id)a0 replyConnection:(id)a1;
- (void)cancel_:(id)a0 replyConnection:(id)a1;
- (void)decode_:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (void)display_:(id)a0 replyConnection:(id)a1;
- (void)fetch_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 bulkDataService:(id)a2 bulkDataServiceProperties:(id)a3 URLAccesService:(id)a4;
- (void)load_error_:(id)a0 replyConnection:(id)a1;
- (void)pause_:(id)a0 replyConnection:(id)a1;
- (void)profile_:(id)a0 replyConnection:(id)a1;
- (void)query_:(id)a0 replyConnection:(id)a1;
- (void)raytrace_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;
- (void)resume_:(id)a0 replyConnection:(id)a1;
- (void)shaderdebug_:(id)a0 replyConnection:(id)a1;
- (void)terminateProcess:(id)a0 replyConnection:(id)a1;
- (void)update_:(id)a0 replyConnection:(id)a1;

@end
