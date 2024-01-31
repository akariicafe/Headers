@class NSString, NSMutableDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_group, CalDAVCalendarPropertyRefreshDelegate;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    NSMutableSet *_updatedCalendars;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
}

@property (retain, nonatomic) NSString *calendarHomeSyncToken;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *outstandingTasksGroup;
@property (nonatomic) BOOL forceClearCalendarHomeSyncToken;
@property (nonatomic) id<CalDAVCalendarPropertyRefreshDelegate> delegate;
@property (nonatomic) BOOL useCalendarHomeSyncReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_continueHandleContainerInfoTask:(id)a0 completedWithContainers:(id)a1 error:(id)a2;
- (void)continueRefreshFromSendingDeletes;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)a0;
- (void)_retryMkCalForCalendar:(id)a0;
- (int)_sharingStatusForContainer:(id)a0;
- (id)_getSetIsAffectingAvailabilityTask:(BOOL)a0 forCalendar:(id)a1 atURL:(id)a2;
- (BOOL)_handleUpdateForCalendar:(id)a0;
- (id)_getDefaultMkCalendarForPrincipalTaskGroup:(id)a0 isEventCalendar:(BOOL)a1;
- (id)_getSetPropertyStringTask:(id)a0 forName:(id)a1 andNamespace:(id)a2 forCalendar:(id)a3 atURL:(id)a4;
- (void)containerInfoSyncTask:(id)a0 retrievedAddedOrModifiedContainers:(id)a1 removedContainerURLs:(id)a2;
- (void)_sendAddsForCalendars;
- (void)containerInfoSyncTask:(id)a0 completedWithNewSyncToken:(id)a1 error:(id)a2;
- (id)_getIsAffectingAvailabilityCoreDAVItem:(id)a0;
- (void)_initializePrincipalCalendarCache;
- (id)_getSetPropertiesTaskWithItemsToSet:(id)a0 itemsToRemove:(id)a1 atURL:(id)a2;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)a0 forCalendar:(id)a1 atURL:(id)a2;
- (BOOL)_handleMkCalTaskGroupError:(id)a0 forCalendar:(id)a1;
- (void)_sendShareActionTasks;
- (void)containerInfoTask:(id)a0 completedWithContainers:(id)a1 error:(id)a2;
- (void)refreshCalendarProperties;
- (void).cxx_destruct;
- (id)_getSetPropertyTaskWithCoreDAVItem:(id)a0 forCalendar:(id)a1 atURL:(id)a2 ignoreErrors:(BOOL)a3;
- (void)_finishRefresh;
- (void)_handleCalendarPublish;
- (void)_updateDefaultSchedulingCalendarIfNeededForInboxCalendar:(id)a0 withContainer:(id)a1;
- (id)initWithPrincipal:(id)a0;
- (id)_getMkcalendarTaskGroupForCalendar:(id)a0;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_sendDeletesForCalendars;
- (id)_generateTimeZoneString:(id)a0;
- (void)_reallyRefreshCalendarProperties;
- (id)_getSetPropertyStringTask:(id)a0 forName:(id)a1 andNamespace:(id)a2 forCalendar:(id)a3 atURL:(id)a4 ignoreErrors:(BOOL)a5;

@end
