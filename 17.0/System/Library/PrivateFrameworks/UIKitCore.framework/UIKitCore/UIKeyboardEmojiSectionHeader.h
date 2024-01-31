@class UIColor, NSString, UIVisualEffect, UIVisualEffectView, UILabel;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {
    UILabel *_emojiSectionHeader;
    UIVisualEffectView *_backdropView;
}

@property (copy, nonatomic) NSString *headerName;
@property (copy, nonatomic) UIColor *headerTextColor;
@property (nonatomic) double headerFontSize;
@property (nonatomic) double headerOpacity;
@property (nonatomic) BOOL useVibrantBlend;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (copy, nonatomic) UIVisualEffect *effect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
