@class SKUIDividerViewElement, NSString, NSArray;

@interface SKUISegmentedControlViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIDividerViewElement *bottomDivider;
@property (readonly, nonatomic) long long initialSelectedItemIndex;
@property (readonly, nonatomic) long long maximumNumberOfVisibleItems;
@property (readonly, nonatomic) NSString *moreListTitle;
@property (readonly, nonatomic) NSArray *segmentItemTitles;

- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (void)dispatchEventOfType:(unsigned long long)a0 forItemAtIndex:(long long)a1;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
