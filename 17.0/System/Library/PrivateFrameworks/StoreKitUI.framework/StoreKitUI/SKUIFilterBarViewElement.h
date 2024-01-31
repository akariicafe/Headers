@class SKUIDividerViewElement;

@interface SKUIFilterBarViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIDividerViewElement *bottomDivider;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)childViewElementsForAlignment:(unsigned long long)a0;
- (long long)pageComponentType;

@end
