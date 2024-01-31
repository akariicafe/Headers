@class NSString, SUUICountdown, SUUIClientContext, UIImage, UIImageView, SUUICountdownView, UILabel, UIColor;

@interface SUUIBrickCollectionViewCell : UICollectionViewCell {
    SUUICountdownView *_countdownView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_overlayImageView;
}

@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SUUICountdown *countdown;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic, getter=isItemImageHidden) BOOL itemImageHidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } itemImageInsets;
@property (readonly, nonatomic) UIImageView *itemImageView;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_reloadHighlight;
- (void)_removeOverlay;
- (void)setColoringWithColorScheme:(id)a0;

@end
