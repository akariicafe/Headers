@class NSArray, RWIProtocolCSSRule;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSRule *rule;
@property (copy, nonatomic) NSArray *matchingSelectors;

- (id)initWithRule:(id)a0 matchingSelectors:(id)a1;

@end
