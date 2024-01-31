@class SUUILabelViewElement, NSArray, SUUIImageViewElement;

@interface SUUIDialogTemplateViewElement : SUUIViewElement

@property (readonly, nonatomic) long long dialogType;
@property (readonly, nonatomic) SUUILabelViewElement *message;
@property (readonly, nonatomic) SUUILabelViewElement *title;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) SUUIImageViewElement *image;

- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
