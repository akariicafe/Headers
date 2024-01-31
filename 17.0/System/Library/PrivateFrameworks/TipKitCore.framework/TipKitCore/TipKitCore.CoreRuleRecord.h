@class NSDate, NSString, NSArray, _TtC10TipKitCore13CoreTipRecord, _TtC10TipKitCore19CoreParameterRecord, _TtC10TipKitCore14CoreRuleRecord, NSDictionary, _TtCC10TipKitCore8CoreRule9Predicate, NSSet, _TtC10TipKitCore15CoreEventRecord;

@interface TipKitCore.CoreRuleRecord : NSManagedObject

@property (class, nonatomic, readonly) NSArray *attributes;
@property (class, nonatomic, readonly) NSArray *relationships;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) _TtCC10TipKitCore8CoreRule9Predicate *predicate;
@property (nonatomic, copy) NSDate *lastEvaluated;
@property (nonatomic, copy) NSDictionary *ruleInfo;
@property (nonatomic) BOOL isDirty;
@property (nonatomic, retain) _TtC10TipKitCore13CoreTipRecord *tip;
@property (nonatomic, retain) _TtC10TipKitCore15CoreEventRecord *event;
@property (nonatomic, retain) _TtC10TipKitCore19CoreParameterRecord *parameter;
@property (nonatomic, retain) _TtC10TipKitCore14CoreRuleRecord *parent;
@property (nonatomic, copy) NSSet *subrules;
@property (nonatomic, readonly) _TtC10TipKitCore13CoreTipRecord *tipRecord;
@property (nonatomic, readonly) _TtC10TipKitCore14CoreRuleRecord *parentRoot;
@property (nonatomic) short categoryValue;
@property (nonatomic) short statusValue;
@property (nonatomic) BOOL updatesFromTipsd;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)updateStatusWithIsSatisfied:(BOOL)a0 error:(id *)a1;

@end
