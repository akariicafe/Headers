@class SUUIDividerViewElement;

@interface SUUIFilterBarViewElement : SUUIViewElement

@property (readonly, nonatomic) SUUIDividerViewElement *bottomDivider;

- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)childViewElementsForAlignment:(unsigned long long)a0;
- (long long)pageComponentType;

@end
