@class SUUIHeaderViewElement;

@interface SUUIColumnViewElement : SUUIViewElement

@property (readonly, nonatomic) long long columnSpan;
@property (readonly, nonatomic) SUUIHeaderViewElement *headerElement;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
