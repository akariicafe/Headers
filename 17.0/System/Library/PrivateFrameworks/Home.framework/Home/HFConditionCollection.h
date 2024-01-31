@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject

@property (retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)conditionCollectionForPredicate:(id)a0;
+ (id)_findBestConditionMatchForPredicates:(id)a0;
+ (id)_findBestMatchingConditionsForPredicates:(id)a0;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)a0;
+ (id)_singleConditionForPredicate:(id)a0 knownConditionsOnly:(BOOL)a1;

- (void)removeCondition:(id)a0;
- (id)init;
- (void)addCondition:(id)a0;
- (id)initWithConditions:(id)a0;
- (void).cxx_destruct;

@end
