@class WBSCloudHistory, NSTimer, WBSHistoryService, NSXPCConnection, NSObject, WBSCloudHistoryConfiguration;
@protocol OS_dispatch_queue;

@interface WBSHistoryConnection : NSObject <WBSHistoryConnectionProtocol> {
    WBSHistoryService *_historyService;
    NSXPCConnection *_completionListProvider;
    NSTimer *_delayTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCloudHistory *_cloudHistory;
    WBSCloudHistoryConfiguration *_cloudHistoryConfiguration;
}

- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)ensureConnected:(id /* block */)a0;
- (void)getServiceInfo:(id /* block */)a0;
- (id)initWithHistoryService:(id)a0;
- (void)beginHistoryAccessSession:(id /* block */)a0;
- (void)beginURLCompletionSession:(id /* block */)a0;
- (void)setCompletionListVendorEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)initializeCloudHistoryWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getCompletionListItemsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectWithOptions:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)releaseCloudHistory:(id /* block */)a0;
- (void)queryMemoryFootprint:(id /* block */)a0;

@end
