@class UIColor, NSString, SKUIViewElement, NSMapTable, NSMutableArray, SKUIShapeView;
@protocol SKUISignInViewDelegate;

@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView> {
    UIColor *_borderColor;
    SKUIShapeView *_borderView;
    NSMutableArray *_labels;
    NSMutableArray *_textFields;
    SKUIViewElement *_viewElement;
    NSMapTable *_viewFontDescriptors;
}

@property (weak, nonatomic) id<SKUISignInViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_borderPathWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)_fontDescriptorWithViewElement:(id)a0 defaultTextStyle:(id)a1 bold:(BOOL)a2;
+ (id)_labelWithViewElement:(id)a0;
+ (id)_textFieldWithViewElement:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (double)_layoutLabels;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_accountNameText;
- (id)_applePasswordText;
- (void)_clearFieldsAndLabels;
- (void)_layoutTextFieldsOffsetX:(double)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
