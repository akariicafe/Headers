@class UIStackView, UIView, NSArray, _UISlotView, UIImageView, _UIEditMenuListItem, NSLayoutConstraint, UILabel;

@interface _UIEditMenuListViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIStackView *contentStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIView *customView;
@property (readonly, nonatomic) NSArray *contentConstraints;
@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *slotViewCenterYConstraint;
@property (retain, nonatomic) _UIEditMenuListItem *item;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } arrowEdgeInsets;
@property (readonly, nonatomic) _UISlotView *securePasteButtonSlotView;

+ (struct CGSize { double x0; double x1; })layoutSizeForItem:(id)a0 traitCollection:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2;

- (void)_updateConstraints;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)_contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (id)initWithCoder:(id)a0;
- (void)_createViewHierarchy;
- (void)_hideContents;
- (void)_overlaySlotView:(id)a0;
- (unsigned int)_secureName;
- (void)_setupSlotView;
- (void)_updateBackgroundForCurrentState;
- (BOOL)_wantsPasteSlotView;

@end
