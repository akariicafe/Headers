@class NSString, SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement

@property (readonly, nonatomic) long long circleSize;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) SKUIImageViewElement *imageElement;
@property (readonly, nonatomic) SKUILabelViewElement *titleElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
