@class UIMorphingLabel, UIView, UIImage, UIScrollView, UIFont, UIImageView, NSString, TIKeyboardCandidate, UIKBRenderConfig, UILabel, UIColor;

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backgroundViewHighlightColor;
@property (retain, nonatomic) UIView *leftSeparatorView;
@property (retain, nonatomic) UIView *rightSeparatorView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, getter=isLabelTruncated) BOOL labelTruncated;
@property (retain, nonatomic) UILabel *normalLabel;
@property (retain, nonatomic) UIMorphingLabel *morphingLabel;
@property (retain, nonatomic) UIView *secureCandidateLabel;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) double highlightMargin;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic) BOOL useContinuousCornerInHighlight;
@property (nonatomic) unsigned long long roundedHighlightEdges;
@property (nonatomic) unsigned long long visibleSeparatorEdges;
@property (nonatomic) double separatorMargin;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long layoutType;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIScrollView *maskingScrollView;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIFont *labelFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_useSeparatorViews;
+ (id)cellHighlightColorForDarkStyle:(BOOL)a0;

- (id)labelView;
- (id)image;
- (BOOL)_usePadStyle;
- (id)currentTextSuggestion;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateCornerRadius;
- (id)attributedStringRepresentationOfCandidate:(id)a0;
- (BOOL)_isEmojiCandidate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_preferredBackgroundColor;
- (struct CGSize { double x0; double x1; })labelTextSizeForCandidate:(id)a0;
- (id)_preferredTextColorForHighlighted:(BOOL)a0 useDarkStyle:(BOOL)a1;
- (BOOL)_renderConfigUsesDarkStyle:(id)a0;
- (id)labelViewForCandidate:(id)a0;
- (BOOL)useAutofillStyle;
- (void)setCandidate:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)centerTruncatedStringForString:(id)a0 withAttributes:(id)a1 fittingWidth:(double)a2;
- (void)_updateColorsForRenderConfig:(id)a0 highlighted:(BOOL)a1;
- (void)setImage:(id)a0;
- (BOOL)candidateRequiresTruncationForBoundingWidth:(double)a0;
- (id)_displayLabelForCandidate:(id)a0;
- (BOOL)_usesMorphingLabelForCandidate:(id)a0;
- (void)layoutSubviews;
- (BOOL)_isSecureCandidate:(id)a0;
- (id)headerTextAttributes;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)_isStickerCandidate:(id)a0;
- (id)displayTextAttributesForMultiline:(BOOL)a0 header:(BOOL)a1;

@end
