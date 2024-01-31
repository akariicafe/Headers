@class NSMutableDictionary, NSDate, ASEvent, NSNumber;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (weak, nonatomic) ASEvent *originalEvent;
@property (retain, nonatomic) NSNumber *isDeleted;
@property (retain, nonatomic) NSDate *exceptionStartTime;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (id)eventExceptionWithCalEvent:(void *)a0 originalEvent:(id)a1 account:(id)a2;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadClientIDs;
- (void)takeValuesFromParentForAccount:(id)a0;
- (void)_loadAttributesFromCalEvent:(void *)a0 withKnownExceptionDate:(id)a1 forAccount:(id)a2;
- (id)_transformedExceptionStartDateForActiveSync:(id)a0 isFloating:(BOOL)a1;
- (id)_transformedExceptionStartDateForCalFramework:(id)a0;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (BOOL)deleteFromCalendar;
- (id)exceptionDate;
- (BOOL)fillOutMissingExternalIdsForAccountID:(id)a0;
- (BOOL)hasOccurrenceInTheFuture;
- (id)initWithCalEvent:(void *)a0 originalEvent:(id)a1 account:(id)a2;
- (id)initWithExceptionStartTime:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (void)saveToCalendarWithParentASEvent:(id)a0 existingRecord:(void *)a1 intoCalendar:(void *)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5;
- (id)serverIdForCalFrameworkWithParentEvent:(id)a0;
- (id)serverIdForCalFrameworkWithParentServerId:(id)a0;
- (void)setExceptionDate:(id)a0;
- (void)setObject:(id)a0 forDCCPT:(int)a1;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)a0 forAccount:(id)a1;
- (BOOL)verifyExternalIdsForAccountID:(id)a0;

@end
