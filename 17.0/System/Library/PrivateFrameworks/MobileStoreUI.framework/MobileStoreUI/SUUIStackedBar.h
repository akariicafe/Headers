@class NSArray, _UIBackdropView, UIView;
@protocol SUUIStackedBarDelegate;

@interface SUUIStackedBar : UIView {
    _UIBackdropView *_backdropView;
    NSArray *_cells;
    UIView *_wrapperView;
    UIView *_maskView;
    double _newOffset;
}

@property (weak) id<SUUIStackedBarDelegate> delegate;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) BOOL alwaysShowsBackButton;
@property (nonatomic) BOOL hidesStatusBar;
@property (nonatomic) BOOL lastItemExpanded;
@property (nonatomic) BOOL splitViewStyle;
@property (nonatomic) BOOL zeroHeightWhenFirstChildExpanded;
@property (nonatomic) double offset;

- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reload;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_backAction:(id)a0;
- (void)_resetNewOffset;
- (void)_buttonAction:(id)a0;
- (void)_selectItemAtIndex:(long long)a0;
- (void)animateToFullSizeIfNecessary;
- (void)setLastItemExpanded:(BOOL)a0 animated:(BOOL)a1;

@end
