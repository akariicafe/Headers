@interface _SVXAddViewsExpressionParser : _SVXExpressionParser

@property (nonatomic) BOOL ignoresLocallyParseableExpressions;

- (id)initWithParsingService:(id)a0 preferences:(id)a1;
- (void)parseAddViews:(id)a0 reply:(id /* block */)a1;

@end
