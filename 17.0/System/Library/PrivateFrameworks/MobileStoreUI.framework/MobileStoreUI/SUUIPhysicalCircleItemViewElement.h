@class NSString, SUUIImageViewElement, SUUILabelViewElement;

@interface SUUIPhysicalCircleItemViewElement : SUUIViewElement

@property (readonly, nonatomic) long long circleSize;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) SUUIImageViewElement *imageElement;
@property (readonly, nonatomic) SUUILabelViewElement *titleElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
