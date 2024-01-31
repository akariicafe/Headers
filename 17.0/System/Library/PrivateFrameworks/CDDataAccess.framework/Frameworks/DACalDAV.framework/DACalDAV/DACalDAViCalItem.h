@class NSData, NSString, NSURL, REMObjectID, NSArray, NSMutableDictionary, CalDAVUpdateOwnerItem, CalDAVCalendarServerScheduleChangesItem, ICSDocument;
@protocol DACalDAViCalItemBackingModel;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {
    NSString *_scheduleTag;
    NSMutableDictionary *_originatingChangeItems;
}

@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSData *dataPayload;
@property (retain, nonatomic) ICSDocument *document;
@property (nonatomic) BOOL statusChanged;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSString *filename;
@property (nonatomic) unsigned long long debugReminderFetchCount;
@property (retain, nonatomic) NSURL *serverID;
@property (retain, nonatomic) REMObjectID *rem_clientID;
@property (readonly, nonatomic) id<DACalDAViCalItemBackingModel> rem_reminderItem;
@property (retain, nonatomic) NSString *scheduleTag;
@property (retain, nonatomic) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *createdBy;
@property (retain, nonatomic) CalDAVUpdateOwnerItem *updatedBy;
@property (copy, nonatomic) NSMutableDictionary *originatingChangeItems;
@property (nonatomic) BOOL isMigrate;
@property (readonly, nonatomic) NSArray *childrenOrder;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) NSURL *destinationURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filenameWithUniqueIdentifier:(id)a0;
+ (id)rem_store;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 eTag:(id)a1 dataPayload:(id)a2 inContainerWithURL:(id)a3 withAccountInfoProvider:(id)a4;
- (void)addChangeOfType:(id)a0 forChangeRowid:(int)a1;
- (void)_fixUpCalendarForServer:(id)a0;
- (BOOL)deleteFromContainer:(void *)a0;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (id)_addOrModifyTask:(id)a0 inICSCalendar:(id)a1 withList:(id)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 inMobileCalendar:(id)a5 batchSaveRequest:(id)a6;
- (id)initWithREMReminder:(id)a0 inContainer:(id)a1;
- (void)populateDataPayloadWithReminder:(id)a0;
- (BOOL)rem_setReminderPropertiesWithBlock:(id /* block */)a0 error:(id *)a1;
- (id)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4 calendar:(id)a5 batchSaveRequest:(id)a6;
- (void)setRem_LocalItem:(id)a0;

@end
