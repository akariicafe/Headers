@class NSAttributedString, UITapGestureRecognizer, NSString, VUILabel, CALayer, VUITextView, VUITextLayout, CAGradientLayer, UIColor;

@interface FocusableTextView : VUIBaseView <VUILabelBaselineProtocol> {
    UIColor *_backgroundColor;
    VUITextView *_auxilliaryTextView;
    double _defaultLineFragmentPadding;
}

@property (retain, nonatomic) VUITextView *descriptionTextView;
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer;
@property (nonatomic) BOOL needsTextSizeComputation;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUILabel *computationLabel;
@property (retain, nonatomic) VUILabel *moreLabel;
@property (retain, nonatomic) CALayer *moreButtonMask;
@property (retain, nonatomic) CAGradientLayer *moreButtonMaskFade;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly, nonatomic) double vuiBaselineHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bottomInset;
+ (double)topInset;
+ (double)cornerRadius;
+ (id)textViewWithAttributedString:(id)a0 textLayout:(id)a1 existingTextView:(id)a2;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (id)makeTextView;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelFrame;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)_bottomBaselineOffset;
- (id)_createMoreButtonMaskFade;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getStartAndEndIndexOfLastVisibleLine:(id)a0 startIndex:(unsigned long long *)a1 endIndex:(unsigned long long *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_makeLastLineBreakByClipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_moreLabelExclusionPathFrame;
- (void)_recomputeTextSizeIfNeeded;
- (void)_selectButtonAction:(id)a0;
- (void)_setNeedsTextSizeComputation;
- (void)_updateTextColorsIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForAttributedString:(id)a0 withWidth:(double)a1 lines:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureMoreButtonMaskWithMaskFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 moreLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTextLayout:(id)a0;
- (void)layoutSubviews_iOSAndMacOS;
- (void)setupViews_iOSAndMacOS;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)vui_baselineOffsetFromBottom;

@end
