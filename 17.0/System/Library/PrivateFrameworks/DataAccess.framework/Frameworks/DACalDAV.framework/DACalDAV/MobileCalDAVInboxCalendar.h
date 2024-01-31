@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar

@property (retain, nonatomic) CalDiagInboxCollectionSync *inboxCollectionSyncDiagnostics;

- (void).cxx_destruct;
- (BOOL)isScheduleInbox;
- (id)allItemURLs;
- (BOOL)deleteResourcesAtURLs:(id)a0;
- (id)etagsForItemURLs:(id)a0;
- (BOOL)updateResourcesFromServer:(id)a0;
- (void *)_copyEventActionWithURL:(id)a0 forCalItemWithUniqueIdentifier:(id)a1;
- (BOOL)_removeInvitationWithURL:(id)a0;
- (id)initWithCalendarURL:(id)a0 calendar:(void *)a1 principal:(id)a2 title:(id)a3;
- (void)recordDiagnosticsForAccountSync:(id)a0;
- (void)setETag:(id)a0 forInvitationAtURL:(id)a1 uniqueIdentifier:(id)a2;
- (BOOL)shouldCalendarBeHidden;

@end
