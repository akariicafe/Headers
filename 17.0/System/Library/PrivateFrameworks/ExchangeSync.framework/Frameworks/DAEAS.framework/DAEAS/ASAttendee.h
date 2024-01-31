@class NSString, NSMutableDictionary, NSDate;

@interface ASAttendee : ASItem <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *email;
@property (nonatomic) int status;
@property (nonatomic) int role;
@property (retain, nonatomic) NSDate *proposedStartTime;
@property (retain, nonatomic) NSDate *proposedEndTime;
@property (nonatomic) int localId;
@property (retain, nonatomic) NSString *invitedBy;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)fullEmailString;
- (void)appendActiveSyncDataForTask:(id)a0 toData:(id)a1;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (id)copyOfSelfWithoutLocalID;
- (id)icsUserAddress;
- (id)initWithCalAttendee:(void *)a0 parentEvent:(id)a1;
- (void)saveToCalendarWithParentASEvent:(id)a0 existingRecord:(void *)a1 isDefaultCalendar:(BOOL)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5;
- (void)setObject:(id)a0 forDCCPT:(int)a1;

@end
