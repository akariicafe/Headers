@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {
    SSProtocolConditionalContext *_context;
    NSDictionary *_dictionary;
}

+ (id)defaultConditionalContext;
+ (void)setDefaultConditionalContext:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_dictionaryByEvaluatingWithForcedValue:(long long)a0;
- (id)_dictionaryByEvaluatingDictionary:(id)a0 withForcedValue:(long long)a1;
- (BOOL)_checkConditions:(id)a0 withOperator:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 conditionalContext:(id)a1;
- (id)dictionaryByEvaluatingConditions;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)a0 withForcedValue:(long long)a1;
- (id)_arrayByEvaluatingChildrenOfArray:(id)a0 withForcedValue:(long long)a1;
- (int)_logicalOperatorForString:(id)a0;
- (id)dictionaryByRemovingConditions;

@end
