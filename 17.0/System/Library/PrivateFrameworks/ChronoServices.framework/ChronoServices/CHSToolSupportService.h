@class CHSToolServiceConnection;

@interface CHSToolSupportService : NSObject

@property (readonly, nonatomic) CHSToolServiceConnection *connection;

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)cacheDescriptorsForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)contentURLForActivityID:(id)a0 completion:(id /* block */)a1;
- (void)expireLocationGracePeriods;
- (void)extensionInfo:(id /* block */)a0;
- (void)extensionInfoForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)a0;
- (void)reloadTimelinesOfKind:(id)a0 containedIn:(id)a1 reason:(id)a2 completion:(id /* block */)a3;
- (void)resetCaches:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)runReaper;
- (void)timelineForWidgetKey:(id)a0 completion:(id /* block */)a1;
- (void)widgetsWithTimelines:(id /* block */)a0;

@end
