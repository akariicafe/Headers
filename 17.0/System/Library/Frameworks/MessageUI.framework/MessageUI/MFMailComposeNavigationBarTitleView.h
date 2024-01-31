@class NSString, EFLazyCache, UILabel;

@interface MFMailComposeNavigationBarTitleView : _UINavigationBarTitleView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    unsigned long long _style;
}

@property (class, readonly) EFLazyCache *attributedStringsCache;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void)layoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)contentDidChange;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)_subtitleTextColor;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsWithExclusionRects:(id)a0 wantsUniformHorizontalInsets:(BOOL)a1;
- (BOOL)_needsToLayoutTitleLabel;
- (double)_subtitleFontSizeWhenMini:(BOOL)a0;
- (double)_titleFontSizeWhenMini:(BOOL)a0;
- (double)_topPaddingForTitleWhenMini:(BOOL)a0;
- (void)_updateHeightForCurrentTraits;
- (void)_updateTrailingBarButtonItemsAlpha;
- (double)_verticalOffsetForSubtitleWhenMini:(BOOL)a0;
- (void)setSubtitle:(id)a0 withStyle:(unsigned long long)a1;

@end
