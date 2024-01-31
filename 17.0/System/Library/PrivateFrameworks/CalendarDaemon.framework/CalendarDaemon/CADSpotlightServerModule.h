@class CADSpotlightIndexer, NSString;

@interface CADSpotlightServerModule : NSObject <SpotlightDaemonClient, CADModule>

@property (readonly, nonatomic) CADSpotlightIndexer *indexer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedNotificationNamed:(id)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (void)provideDataForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)provideFileURLForBundleID:(id)a0 protectionClass:(id)a1 itemIdentifier:(id)a2 typeIdentifier:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)reindexAllItemsForBundleID:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)reindexItemsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 acknowledgementHandler:(id /* block */)a3;

@end
