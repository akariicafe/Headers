@class CAMDepthEffectSuggestionButton;

@interface CAMPhotoModeDepthDescriptionOverlayView : CAMDescriptionOverlayView

@property (readonly, nonatomic) CAMDepthEffectSuggestionButton *_button;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleDidTapButton:(id)a0;
- (id)acknowledgmentTextUsingNarrowWidth:(BOOL)a0;
- (id)attributedDescriptionTextUsingNarrowWidth:(BOOL)a0;
- (id)descriptionTitleTextUsingNarrowWidth:(BOOL)a0;
- (id)detailTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTitleTextUsingNarrowWidth:(BOOL)a0;
- (double)maxDescriptionTextWidthForNarrowWidth:(BOOL)a0 isLandscape:(BOOL)a1 usingFontSizeMultiplier:(double)a2;
- (void)setCustomSubviewsVisible:(BOOL)a0;
- (id)titleTextUsingNarrowWidth:(BOOL)a0;

@end
