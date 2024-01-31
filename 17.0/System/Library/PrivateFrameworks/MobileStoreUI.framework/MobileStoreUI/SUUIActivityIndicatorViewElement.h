@class SUUIImageViewElement, SUUILabelViewElement;

@interface SUUIActivityIndicatorViewElement : SUUIViewElement {
    double _period;
}

@property (readonly, nonatomic) SUUIImageViewElement *image;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) SUUILabelViewElement *text;

- (BOOL)isDisabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
