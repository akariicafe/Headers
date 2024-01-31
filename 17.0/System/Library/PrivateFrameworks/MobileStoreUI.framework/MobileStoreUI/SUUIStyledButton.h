@class SUUIAttributedStringLayout, NSString, SUUIButtonBorderStyle, SUUIShapeView, UIImageView, SUUIItemOfferButton, SUUIAttributedStringView, SUUIImageView;
@protocol SUUIItemOfferButtonDelegate;

@interface SUUIStyledButton : UIControl <SUUIViewElementOfferButton> {
    SUUIAttributedStringView *_attributedStringView;
    SUUIShapeView *_borderView;
    BOOL _didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    SUUIItemOfferButton *_itemOfferButton;
}

@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bigHitInsets;
@property (readonly, nonatomic) double firstBaselineOffset;
@property (copy, nonatomic) SUUIButtonBorderStyle *borderStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } buttonPadding;
@property (nonatomic) long long buttonType;
@property (nonatomic) double imageTextPaddingInterior;
@property (readonly, nonatomic) SUUIImageView *imageView;
@property (nonatomic) double imageYAdjustment;
@property (retain, nonatomic) SUUIAttributedStringLayout *titleLayout;
@property (nonatomic) BOOL useBigHitTarget;
@property (nonatomic) BOOL usesTintColor;
@property (readonly, nonatomic, getter=isUsingItemOfferAppearance) BOOL usingItemOfferAppearance;
@property (weak, nonatomic) id<SUUIItemOfferButtonDelegate> itemOfferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)buttonTypeForElement:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1 borderStyle:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeForTextSize:(struct CGSize { double x0; double x1; })a0 buttonType:(long long)a1 borderStyle:(id)a2 interiorPadding:(double)a3;
+ (BOOL)usesItemOfferAppearanceForButtonType:(long long)a0 itemState:(id)a1;

- (id)_textColor;
- (void)setBackgroundColor:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_borderColor;
- (id)_textBackgroundColor;
- (id)_borderFillColor;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_itemOfferButtonAction:(id)a0;
- (void)_reloadDisclosureImage;
- (void)_reloadImageView;
- (void)_reloadOverrideTextColor;
- (void)_showConfirmationAction:(id)a0;
- (BOOL)_usesTintColor;
- (void)setTitleLayout:(id)a0 forceRefresh:(BOOL)a1;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)a0 itemState:(id)a1 clientContext:(id)a2 animated:(BOOL)a3;

@end
