@class UIView;

@interface GKFocusHighlightingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *focusHighlightView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } _gkFocusHighlightInsets;
@property (nonatomic) double _gkFocusHighlightCornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)awakeFromNib;
- (void)initFocusHighlightView;
- (void)updateFocusHighlightView;

@end
