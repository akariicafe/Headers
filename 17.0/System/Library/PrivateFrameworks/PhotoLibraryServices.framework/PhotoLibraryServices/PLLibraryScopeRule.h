@class PLLibraryScopeConditionDateRange, PLLibraryScopeConditionPerson, NSMutableArray;

@interface PLLibraryScopeRule : NSObject <NSCopying>

@property (readonly, nonatomic) PLLibraryScopeConditionDateRange *dateRangeCondition;
@property (readonly, nonatomic) PLLibraryScopeConditionPerson *personCondition;
@property (readonly, nonatomic) NSMutableArray *unknownConditions;

+ (id)dataForLibraryScopeRules:(id)a0;
+ (id)libraryScopeRulesForLibraryScopeRulesData:(id)a0;
+ (id)queryForLibraryScopeRules:(id)a0;
+ (id)_dictionaryOfArrayOfSingleQueriesToCriteriaFromRuleQuery:(id)a0 parentQuery:(id)a1;
+ (id)_knownConditionClasses;
+ (id)_rulesFromQuery:(id)a0;

- (id)initWithQuery:(id)a0;
- (void)addCondition:(id)a0;
- (id)query;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeConditionOfType:(Class)a0;
- (id)backingPredicateInPhotoLibrary:(id)a0;
- (id)allConditions;

@end
