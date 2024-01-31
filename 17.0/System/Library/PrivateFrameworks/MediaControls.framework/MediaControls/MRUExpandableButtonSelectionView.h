@class MRUCAPackageView, MediaControlsExpandableButtonOption;

@interface MRUExpandableButtonSelectionView : UIView

@property (retain, nonatomic) MRUCAPackageView *packageView;
@property (retain, nonatomic) MediaControlsExpandableButtonOption *option;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
