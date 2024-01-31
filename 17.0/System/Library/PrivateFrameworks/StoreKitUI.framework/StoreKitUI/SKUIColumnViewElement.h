@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement

@property (readonly, nonatomic) long long columnSpan;
@property (readonly, nonatomic) SKUIHeaderViewElement *headerElement;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
