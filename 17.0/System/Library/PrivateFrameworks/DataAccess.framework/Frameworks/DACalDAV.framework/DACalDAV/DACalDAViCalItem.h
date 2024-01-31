@class NSData, NSString, NSURL, NSArray, NSMutableDictionary, CalDAVUpdateOwnerItem, CalDAVCalendarServerScheduleChangesItem, ICSDocument, NSNumber;

@interface DACalDAViCalItem : NSObject <ICSDocumentParseDelegate, CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
}

@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSData *dataPayload;
@property (retain, nonatomic) ICSDocument *document;
@property (nonatomic) BOOL statusChanged;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) NSNumber *clientID;
@property (readonly, nonatomic) void *calItem;
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;
@property (copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property (nonatomic) BOOL isMigrate;
@property (readonly, nonatomic) BOOL invitationStatusCleared;
@property (nonatomic) BOOL prohibitLocalCreationOfServerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;

+ (BOOL)_checkOccurrencesForEvent:(id)a0 fromDate:(id)a1 toDate:(id)a2;
+ (BOOL)_shouldApplyEvent:(id)a0 instanceWithStartDate:(id)a1 startRange:(id)a2 endRange:(id)a3;
+ (BOOL)_shouldApplyEventFromSyncReport:(id)a0 startDate:(id)a1 endDate:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)documentParsedCalendar:(id)a0;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;
- (void)addChangeOfType:(id)a0 forChangeRowid:(int)a1;
- (BOOL)_addOrModifyEvent:(id)a0 inICSCalendar:(id)a1 withContainer:(void *)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 inMobileCalendar:(id)a5;
- (BOOL)_addOrModifyTask:(id)a0 inICSCalendar:(id)a1 withContainer:(void *)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 inMobileCalendar:(id)a5;
- (void)_fixUpCalendarForServer:(id)a0;
- (id)_getDetachedEventUniqueIdentifiersAndCleanupDuplicatesForCalEvent:(void *)a0;
- (void)_removeCalEvent:(void *)a0 fromUniqueIdentifiersSet:(id)a1;
- (void)_removeDetachedEventsWithUniqueIdentifiers:(id)a0 fromEvent:(void *)a1 withContainer:(void *)a2 inMobileCalendar:(id)a3;
- (void)_setModificationInfoOnItem:(void *)a0;
- (void)cacheDataPayload;
- (BOOL)deleteFromContainer:(void *)a0;
- (id)initWithCalRecord:(void *)a0 inContainer:(id)a1 accountID:(id)a2;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (void *)localItem;
- (id)recurrenceSetsForICSCalendar:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveToContainer:(void *)a0 shouldMergeProperties:(BOOL)a1 outMergeDidChooseLocalProperties:(BOOL *)a2 account:(id)a3 mobileCalendar:(id)a4 outRecurrenceSets:(id *)a5;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setLocalItem:(void *)a0;

@end
