@class NSString, SUUIViewElementText;

@interface SUUISearchBarViewElement : SUUIInputViewElement

@property (readonly, nonatomic) NSString *accessoryText;
@property (readonly, nonatomic) SUUIViewElementText *defaultText;
@property (readonly, nonatomic) NSString *placeholderString;
@property (readonly, nonatomic) NSString *searchHintsURLString;
@property (readonly, nonatomic) NSString *trendingSearchURLString;

- (void).cxx_destruct;
- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
