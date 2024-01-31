@class NSMutableDictionary;

@interface HREActionVarianceCollection : NSObject

@property (retain, nonatomic) NSMutableDictionary *rules;

+ (id)varianceRuleCollectionWithRules:(id)a0;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithRules:(id)a0;
- (BOOL)anyRulePassesForAction:(id)a0;

@end
