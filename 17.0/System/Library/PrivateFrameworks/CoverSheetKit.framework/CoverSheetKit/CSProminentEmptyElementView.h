@class UIView;

@interface CSProminentEmptyElementView : CSProminentElementView

@property (nonatomic) UIView *contentView;

- (id)initWithContentView:(id)a0;
- (void)_layoutContentIfNeeded;
- (void)layoutSubviews;

@end
