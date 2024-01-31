@class EDSearchableIndexDiagnosticsController, EDPersistenceDatabase, EDSearchableIndex, NSString, EDSearchableIndexPersistence, NSObject, EDSearchableIndexScheduler;
@protocol OS_os_log, EFCancelable;

@interface EDSearchableIndexManager : NSObject <EFLoggable, EDMessageChangeHookResponder>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL needsReindex;
@property (nonatomic) BOOL needsToScheduleRecurringActivity;
@property (retain, nonatomic) id<EFCancelable> turboModeObservationToken;
@property (retain, nonatomic) EDSearchableIndexDiagnosticsController *diagnosticsController;
@property (readonly, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly, nonatomic) EDSearchableIndexScheduler *scheduler;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EDSearchableIndex *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)scheduleRecurringActivity;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0;
- (void).cxx_destruct;
- (void)enableIndexingAndBeginScheduling:(BOOL)a0 budgetConfiguration:(id)a1;
- (void)test_tearDown;
- (id)initWithDatabase:(id)a0 messagePersistence:(id)a1 richLinkPersistence:(id)a2 hookResponder:(id)a3;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidAddLabels:(id)a0 removeLabels:(id)a1 messages:(id)a2 generationWindow:(id)a3;
- (void)setNeedsReindex;
- (void)persistenceDidAddDataDetectionResults:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidFinishUpdates;
- (void)persistenceDidUpdateData:(id)a0 message:(id)a1;
- (void)persistenceWillBeginUpdates;
- (void)_removeAllItemsFromIndexAndWait:(BOOL)a0 options:(unsigned long long)a1;
- (void)_removeItemsForPersistedMessages:(id)a0;
- (void)_startObservingTurboModeToggle;
- (void)removeAllItemsFromIndexAndWait:(BOOL)a0 skipInvalidation:(BOOL)a1;

@end
