@class _UIContextMenuCellContentView;

@interface _UIContextMenuCell : UICollectionViewCell

@property (readonly, nonatomic) _UIContextMenuCellContentView *actionView;

+ (Class)_contentViewClass;
+ (BOOL)_isInternalCell;
+ (BOOL)_wantsLegacyMenuGesture;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (long long)_focusItemDeferralMode;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setSelected:(BOOL)a0;
- (BOOL)_allowsHorizontalFocusMovement;
- (void)_configureFocusedFloatingContentView:(id)a0;
- (void)_updateStateWithAnimationCoordinator:(id)a0 animated:(BOOL)a1;
- (BOOL)_wantsKeyCommandsWhenDeferred;
- (void)setHighlighted:(BOOL)a0 forHover:(BOOL)a1;

@end
