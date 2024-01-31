@class NSXPCListener, NSString, WBSHistoryConnectionProxy, CompletionList, NSTimer;
@protocol CompletionListVendorForHistoryServiceDataSource;

@interface CompletionListVendorForHistoryService : NSObject <NSXPCListenerDelegate, WBSHistoryCompletionListVendorProtocol, CompletionListDelegate> {
    id<CompletionListVendorForHistoryServiceDataSource> _dataSource;
    NSXPCListener *_xpcListener;
    WBSHistoryConnectionProxy *_historyProxy;
    CompletionList *_completionList;
    id /* block */ _completionListItemsCallback;
    NSTimer *_completionListUpdatesDidSettleTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeProviderWithDataSource:(id)a0;

- (id)_initWithDataSource:(id)a0;
- (void)completionListDidUpdate:(id)a0 forQuery:(id)a1;
- (void)completionList:(id)a0 didFetchFavicon:(id)a1 forRowAtIndexPath:(id)a2;
- (void)completionList:(id)a0 didRemoveItem:(id)a1 wasLastInSection:(BOOL)a2 atIndexPath:(id)a3 withCompletionHandler:(id /* block */)a4;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)completionListDidRestoreCachedCompletions:(id)a0;
- (void)completionList:(id)a0 topHitDidBecomeReadyForString:(id)a1;
- (void).cxx_destruct;
- (void)getCompletionListItemsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)_connect;
- (double)_timeIntervalForUpdatesToSettle;
- (id)_browserController;
- (void)_completionListDidUpdate:(id)a0;
- (BOOL)_shouldUseNetworkedSearchSuggestions;

@end
