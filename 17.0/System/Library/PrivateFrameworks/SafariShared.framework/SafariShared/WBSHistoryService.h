@class NSDate, NSString, WBSHistoryDatabaseAccessBroker, NSURL, NSXPCConnection, NSObject, NSXPCListener, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_group, WBSHistoryCompletionListVendorProtocol;

@interface WBSHistoryService : NSObject <WBSHistoryServiceDatabaseStore, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_historyServiceQueue;
    NSObject<OS_dispatch_group> *_fileOperationGroup;
    NSMapTable *_databases;
    NSDate *_initDate;
    NSXPCConnection *_completionListProviderConnection;
}

@property (readonly, nonatomic) WBSHistoryDatabaseAccessBroker *databaseAccessBroker;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) id<WBSHistoryCompletionListVendorProtocol> completionListProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setCompletionListVendorEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;
- (void)listDatabaseURLsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;
- (id)_createListener;
- (BOOL)_connectionIsEntitledToUseUserDatabase:(id)a0;
- (id)_openOrReuseExistingDatabaseWithOptions:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (void)connectWithOptions:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)openDatabaseWithID:(id)a0 createIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
