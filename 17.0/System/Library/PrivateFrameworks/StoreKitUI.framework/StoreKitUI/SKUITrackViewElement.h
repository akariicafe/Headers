@class SKUIActionsViewElement;

@interface SKUITrackViewElement : SKUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) SKUIActionsViewElement *swipeActions;

- (BOOL)isEnabled;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
