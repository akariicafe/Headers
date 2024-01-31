@class UINavigationItem, UILabel, UIView;

@interface _UINavigationItemView : UIView {
    UINavigationItem *_item;
    struct CGSize { double width; double height; } _titleSize;
    UIView *_topCrossView;
    UIView *_bottomCrossView;
    BOOL _isCrossFading;
    BOOL _customFontSet;
    UILabel *_label;
}

@property (nonatomic, setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha;

- (void)_updateLabel;
- (double)_titleYAdjustmentCustomization;
- (id)_currentTextColorForBarStyle:(long long)a0;
- (void)_updateLabelContents;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLabelColor;
- (struct CGSize { double x0; double x1; })_currentTextShadowOffsetForBarStyle:(long long)a0;
- (id)font;
- (id)description;
- (id)_defaultFont;
- (id)initWithNavigationItem:(id)a0;
- (void)_setFont:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)_currentTextShadowColorForBarStyle:(long long)a0;
- (void)layoutSubviews;
- (void)setFont:(id)a0;
- (void)_resetTitleSize;
- (void)_cleanUpCrossView;
- (void)_crossFadeHiddingButton:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (void)_prepareCrossViewsForNewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setLineBreakMode:(long long)a0;
- (struct CGSize { double x0; double x1; })_titleSize;
- (id)navigationItem;
- (void)setTitleAutoresizesToFit:(BOOL)a0;
- (BOOL)titleAutoresizesToFit;

@end
