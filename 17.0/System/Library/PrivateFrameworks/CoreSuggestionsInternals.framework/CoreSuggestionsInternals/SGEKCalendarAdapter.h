@class SGSqlEntityStore, NSString, _PASLazyResult;

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver> {
    _PASLazyResult *_lazyEKStoreLock;
}

@property (weak, nonatomic) SGSqlEntityStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEvents:(id)a0;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (void)calendarDeleted;
- (void)_addEKEventToCalendar:(id)a0 storageEvent:(id)a1 ekStore:(id)a2 commit:(BOOL)a3;
- (BOOL)_cancelEKEvent:(id)a0 ekStore:(id)a1 error:(id *)a2;
- (id)_eventsAssociatedWithStorageEvent:(id)a0 store:(id)a1;
- (BOOL)_isEKEventFromNLEventsCalendar:(id)a0 ekStore:(id)a1;
- (BOOL)_isEKEventFromSuggestedCalendar:(id)a0 ekStore:(id)a1;
- (void)_removeEKEvent:(id)a0 store:(id)a1 commit:(BOOL)a2;
- (void)_removeEvent:(id)a0 commit:(BOOL)a1;
- (void)_runWithEKEventStore:(id /* block */)a0;
- (BOOL)_updateEKEvent:(id)a0 withEvent:(id)a1 ekStore:(id)a2 error:(id *)a3;
- (void)_updateEvent:(id)a0 withValuesFrom:(id)a1 ekStore:(id)a2;
- (void)_updateEventMetadataInModifiedEvent:(id)a0 withExistingCheckInShortcutInOriginalEvent:(id)a1 ifTeamIdentifierIsDifferentInStorageEvent:(id)a2;
- (void)addEvent:(id)a0 commit:(BOOL)a1;
- (void)cancelEvent:(id)a0;
- (void)cancelEvent:(id)a0 commit:(BOOL)a1;
- (void)cancelEvents:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0 andEKStore:(id)a1;
- (void)orphanEvent:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;

@end
