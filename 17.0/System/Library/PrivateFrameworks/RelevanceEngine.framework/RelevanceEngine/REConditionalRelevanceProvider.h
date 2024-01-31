@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {
    RERelevanceCondition *_condition;
}

@property (readonly, nonatomic) RERelevanceCondition *condition;

- (unsigned long long)_hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)_evaluateCondition;
- (id)initWithRelevanceCondition:(id)a0;

@end
