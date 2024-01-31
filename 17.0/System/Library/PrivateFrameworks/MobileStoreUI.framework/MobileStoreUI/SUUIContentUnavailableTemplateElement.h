@class SUUIImageViewElement, SUUIButtonViewElement, SUUILabelViewElement;

@interface SUUIContentUnavailableTemplateElement : SUUIViewElement

@property (readonly, nonatomic) SUUIButtonViewElement *button;
@property (readonly, nonatomic) SUUIImageViewElement *image;
@property (readonly, nonatomic) SUUILabelViewElement *messageLabel;
@property (readonly, nonatomic) SUUILabelViewElement *titleLabel;

- (long long)pageComponentType;

@end
