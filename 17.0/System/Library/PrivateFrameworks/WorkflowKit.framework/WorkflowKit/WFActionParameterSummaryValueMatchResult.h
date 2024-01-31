@class WFActionParameterSummaryValue;

@interface WFActionParameterSummaryValueMatchResult : NSObject

@property (readonly, nonatomic) WFActionParameterSummaryValue *value;
@property (readonly, nonatomic) unsigned long long matchType;
@property (readonly, nonatomic) unsigned long long numberOfMatchingParameters;

+ (id)noMatchWithValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 matchType:(unsigned long long)a1 numberOfMatchingParameters:(unsigned long long)a2;

@end
