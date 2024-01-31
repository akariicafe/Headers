@class SUUIProgressIndicatorViewElement;

@interface SUUICarouselViewElement : SUUIViewElement

@property (readonly, nonatomic) double displayInterval;
@property (readonly, nonatomic) SUUIProgressIndicatorViewElement *progressIndicatorElement;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
