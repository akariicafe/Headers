@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement

@property (readonly, nonatomic) long long numberOfRows;
@property (readonly, nonatomic) NSString *slideshowTitle;
@property (copy, nonatomic) id /* block */ shelfItemViewElementValidator;

- (void).cxx_destruct;
- (void)enumerateChildrenUsingBlock:(id /* block */)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
