@class SUUIImageViewElement, NSArray;

@interface SUUIBrowseItemViewElement : SUUIItemViewElement

@property (readonly, nonatomic) SUUIImageViewElement *decorationImage;
@property (readonly, nonatomic) BOOL expands;
@property (readonly, nonatomic) NSArray *metadata;

- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
