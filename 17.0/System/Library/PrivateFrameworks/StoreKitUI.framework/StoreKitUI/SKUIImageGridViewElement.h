@interface SKUIImageGridViewElement : SKUIViewElement

@property (readonly, nonatomic) long long columnCount;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
