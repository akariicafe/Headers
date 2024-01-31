@class NSString, UIVisualEffectView, UILabel, UIView;

@interface _UIContextMenuHeaderView : UICollectionReusableView {
    BOOL _needsConstraintRebuild;
}

@property (retain, nonatomic) UIVisualEffectView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) unsigned long long separatorStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isMenuTitle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } unscaledLayoutMargins;

- (id)_titleFont;
- (double)_separatorHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (void)setBackgroundMaterialGroupName:(id)a0;
- (BOOL)_isDisplayingTitleLabel;
- (long long)_labelRenderingMode;
- (void)_setNeedsConstraintRebuild;
- (id)_titleLabelFilterForCurrentTraits;
- (unsigned long long)_titleLabelNumberOfLines;
- (void)_updateCompositingFilterForCurrentState;

@end
