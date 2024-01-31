@class NSTimeZone, NSString, NSArray, ASToDoRecurrence, NSDate, NSNumber;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement>

@property (nonatomic) void *calTask;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSNumber *bodyTruncated;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSNumber *complete;
@property (retain, nonatomic) NSDate *dateCompleted;
@property (retain, nonatomic) NSDate *dueDate;
@property (retain, nonatomic, setter=setUTCDueDate:) NSDate *utcDueDate;
@property (retain, nonatomic) NSNumber *importance;
@property (retain, nonatomic) NSNumber *reminderIsSet;
@property (retain, nonatomic) NSDate *reminderDateTime;
@property (retain, nonatomic) NSNumber *sensitivity;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic, setter=setUTCStartTime:) NSDate *utcStartTime;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) ASToDoRecurrence *recurrence;
@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;
+ (id)toDoWithCalTask:(void *)a0 serverID:(id)a1 account:(id)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (long long)dataclass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)deleteFromContainer:(void *)a0;
- (BOOL)loadLocalItemWithAccount:(id)a0;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveWithLocalObject:(void *)a0 toContainer:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setLocalItem:(void *)a0;
- (void)loadClientIDs;
- (void)_loadAttributesFromCalTask:(void *)a0 forAccount:(id)a1;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (id)bestGuessTimeZoneWithLocalDate:(id)a0 utcDate:(id)a1;
- (BOOL)deleteFromCalendar;
- (id)initWithCalTask:(void *)a0 serverID:(id)a1 account:(id)a2;
- (BOOL)loadCalRecordForAccount:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (BOOL)saveServerIDToCalendar;
- (BOOL)saveToCalendarWithExistingRecord:(void *)a0 intoCalendar:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;

@end
