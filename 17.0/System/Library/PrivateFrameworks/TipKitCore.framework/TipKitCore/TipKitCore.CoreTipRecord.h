@class NSArray, NSString, _TtCC10TipKitCore7CoreTip20ConstellationContent, NSDate, NSDictionary, NSSet;

@interface TipKitCore.CoreTipRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) _TtCC10TipKitCore7CoreTip20ConstellationContent *content;
@property (nonatomic, copy) NSDate *lastDisplayed;
@property (nonatomic, copy) NSDictionary *tipInfo;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSSet *events;
@property (nonatomic) short statusValue;
@property (nonatomic) short invalidationReasonValue;
@property (nonatomic) long long displayCount;
@property (nonatomic, copy) NSArray *displayDates;
@property (nonatomic) long long actionPerformedCount;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) BOOL cloudSyncEnabled;
@property (nonatomic) BOOL ignoresDisplayFrequency;
@property (nonatomic) BOOL isArchived;
@property (nonatomic, copy) NSDate *lastProcessedUsage;
@property (nonatomic) long long maxDisplayCount;
@property (nonatomic) BOOL usesConstellation;
@property (nonatomic) BOOL usesCoreAnalytics;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)removeUnusedRulesWithCurrentRules:(id)a0 updatesFromTipsd:(BOOL)a1 context:(id)a2 error:(id *)a3;

@end
