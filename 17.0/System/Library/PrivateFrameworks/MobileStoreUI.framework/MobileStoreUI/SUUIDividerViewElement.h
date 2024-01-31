@class SUUIButtonViewElement, SUUIViewElementText;

@interface SUUIDividerViewElement : SUUIViewElement {
    SUUIButtonViewElement *_button;
    long long _dividerType;
    BOOL _dividerTypeWasInitialized;
}

@property (readonly, nonatomic) SUUIButtonViewElement *button;
@property (readonly, nonatomic) long long dividerType;
@property (readonly, nonatomic) SUUIViewElementText *text;

- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
