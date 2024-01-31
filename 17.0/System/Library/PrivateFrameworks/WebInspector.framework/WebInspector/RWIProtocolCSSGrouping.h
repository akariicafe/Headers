@class RWIProtocolCSSRuleId, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;

- (id)initWithType:(long long)a0;

@end
