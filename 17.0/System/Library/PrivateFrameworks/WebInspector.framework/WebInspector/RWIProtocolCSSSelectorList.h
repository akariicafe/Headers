@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *selectors;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) RWIProtocolCSSSourceRange *range;

- (id)initWithSelectors:(id)a0 text:(id)a1;

@end
