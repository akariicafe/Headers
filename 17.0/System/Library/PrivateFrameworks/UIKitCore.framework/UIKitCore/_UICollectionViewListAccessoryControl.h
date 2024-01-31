@class UIColor, UIImageView;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryControl : UIControl <_UICollectionViewListDetailAccessoryView> {
    UIImageView *_imageView;
    BOOL _needsImageViewUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateImageViewIfNeeded;
- (id)initWithType:(long long)a0 constants:(id)a1;
- (void)_executeActionHandler;
- (void).cxx_destruct;
- (void)_setNeedsImageViewUpdate;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)_renderedImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
