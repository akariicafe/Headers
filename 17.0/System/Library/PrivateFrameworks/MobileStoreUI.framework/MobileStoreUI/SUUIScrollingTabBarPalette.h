@class UIView, SUUIScrollingTabBarBackgroundView;
@protocol SUUIScrollingTabBarPaletteDelegate;

@interface SUUIScrollingTabBarPalette : UIView

@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<SUUIScrollingTabBarPaletteDelegate> delegate;
@property (nonatomic, getter=isAttached, setter=_setAttached:) BOOL attached;
@property (readonly, nonatomic, getter=_backgroundView) SUUIScrollingTabBarBackgroundView *backgroundView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) double paletteHeight;
@property (nonatomic) BOOL tabBarBackgroundExtendsBehindPalette;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
