@interface WBUHistory : WBSHistory

@property (nonatomic) BOOL shouldScheduleMaintenance;

- (void)_removeAllVisitedLinks;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)_addVisitedLinkForItemIfNeeded:(id)a0 withVisitOrigin:(long long)a1;
- (Class)_historyItemClass;
- (id)initWithDatabaseID:(id)a0;
- (id)_createHistoryStore;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;

@end
