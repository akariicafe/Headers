@class CalDiagNotificationCollectionSync;

@interface MobileCalDAVNotificationCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagNotificationCollectionSync *notificationCollectionSyncDiagnostics;

- (void).cxx_destruct;
- (BOOL)isNotification;
- (id)allItemURLs;
- (Class)appSpecificCalendarItemClass;
- (id)etagsForItemURLs:(id)a0;
- (void)prepareMergeSyncActionsWithCompletionBlock:(id /* block */)a0;
- (BOOL)setEtag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setScheduleTag:(id)a0 forItemAtURL:(id)a1;
- (BOOL)setURL:(id)a0 forResourceWithUUID:(id)a1;
- (BOOL)updateResourcesFromServer:(id)a0;
- (void *)_copyNotificationWithExternalID:(id)a0;
- (void *)_copyNotificationWithUniqueIdentifier:(id)a0 inCalendar:(void *)a1 orStore:(void *)a2;
- (BOOL)_removeCalendarItemWithURL:(id)a0;
- (void)clearEventChanges;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (void)prepareSyncActionsWithCompletionBlock:(id /* block */)a0;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (BOOL)shouldCalendarBeHidden;

@end
