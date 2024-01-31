@class NSArray, SKUILabelViewElement, SKUIImageViewElement;

@interface SKUIDialogTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) long long dialogType;
@property (readonly, nonatomic) SKUILabelViewElement *message;
@property (readonly, nonatomic) SKUILabelViewElement *title;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) SKUIImageViewElement *image;

- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
