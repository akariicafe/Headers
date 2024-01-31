@class SwiftVCDaemonXPCEventHandler, NSString, MTAlarmDataSource, CSSearchableIndex, VCDaemonDatabaseProvider, NSObject, BPSSink, LNAutoShortcutsProvider;
@protocol OS_dispatch_queue, OS_os_activity;

@interface WFContextualActionSpotlightSyncService : NSObject <WFDatabaseObjectObserver, MTAlarmDataSourceObserver, FCActivityManagerObserving, CSSearchableIndexDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCDaemonDatabaseProvider *databaseProvider;
@property (readonly, nonatomic) BPSSink *focusModeSink;
@property (readonly, nonatomic) CSSearchableIndex *index;
@property (readonly, nonatomic) LNAutoShortcutsProvider *autoShortcutsProvider;
@property (retain, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)contextualActionsIndexVersion;
+ (BOOL)didCompleteAppShortcutDomainMigration;
+ (void)setContextualActionsIndexVersion:(long long)a0;
+ (void)setDidCompleteAppShortcutDomainMigration;

- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)queue_getToggleSettingContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)reindexAllSearchableItemsWithCompletion:(id /* block */)a0;
- (void)dataSourceDidReload:(id)a0;
- (void)start;
- (void)receiveAutoShortcutsUpdatedNotification:(id)a0;
- (void)migrateAppShortcutsAndReindexAllItemsIfNeeded;
- (void)queue_wipeIndexIfNotMigratedToNewDomainIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)queue_fetchWipeAndIndexActionsInDomainWithDescriptiveName:(id)a0 identifiers:(id)a1 fetcher:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (void)applicationWasRegistered:(id)a0;
- (void)queue_getAppShortcutContextualActionsForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithEventHandler:(id)a0 databaseProvider:(id)a1;
- (void)reindexSearchableItems:(unsigned long long)a0 appShortcutBundleIdentifiers:(id)a1 completion:(id /* block */)a2;
- (void)queue_getFocusModeContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)indexAppShortcutsForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)queue_getStaticContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeToBiome;
- (void)queue_getAlarmContextualActionsWithCompletionHandler:(id /* block */)a0;
- (void)reindexAllSearchableItemsIfNeeded:(BOOL)a0;
- (BOOL)shouldIndexToggles;
- (void)reindexSearchableItems:(unsigned long long)a0;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;

@end
