@class NSString, UIImage, UIVisualEffect, WebBookmark, UIImageView, UIAction, _SFHairlineBorderView, UIVisualEffectView, UILabel, UIColor;
@protocol _SFSiteIconViewUpdateObserver;

@interface _SFSiteIconView : UIView {
    UIImageView *_imageView;
    UIVisualEffectView *_backgroundView;
    UILabel *_monogramLabel;
    long long _state;
    id _touchIconRequestToken;
    UIColor *_preferredBackgroundColor;
    UIVisualEffect *_preferredBackgroundEffect;
    UIImageView *_shadowView;
    _SFHairlineBorderView *_borderView;
    BOOL _imageIsTransparent;
}

@property (retain, nonatomic) WebBookmark *bookmark;
@property (copy, nonatomic) UIAction *action;
@property (retain, nonatomic) UIImage *leadingImage;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id<_SFSiteIconViewUpdateObserver> updateObserver;
@property (nonatomic) BOOL allowsDropShadow;
@property (copy, nonatomic) NSString *visualEffectGroupName;

- (void)_setState:(long long)a0;
- (void)updateBookmarkData;
- (id)_effectiveBackgroundColor;
- (void)dealloc;
- (void)setAction:(id)a0 backgroundEffect:(id)a1;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_setSiteIcon:(id)a0 withBackgroundColor:(id)a1;
- (id)_tintedFolderImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setGlyph:(id)a0 withBackgroundEffect:(id)a1;
- (void)_displayDefaultFolderIcon;
- (void)_updateGlyphConfiguration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageFrame;
- (void)_cancelTouchIconRequest;
- (void)_updateMonogramLabelSizeAndFont;
- (id)_glyphConfiguration;
- (void).cxx_destruct;
- (BOOL)usesVibrantAppearance;
- (void)_setMonogramWithString:(id)a0 backgroundColor:(id)a1;
- (double)_monogramFontSize;
- (void)_setGlyph:(id)a0 withBackgroundColor:(id)a1;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)a0;
- (long long)_inferredIconSize;
- (void)layoutSubviews;
- (void)_setImage:(id)a0 withBackgroundColor:(id)a1;

@end
