@class UIImageView, UILabel, NSLayoutConstraint;

@interface SFSectionDisclosureButton : UIButton {
    UILabel *_labelWhenCollapsed;
    NSLayoutConstraint *_labelWhenCollapsedLeadingConstraint;
    UILabel *_labelWhenExpanded;
    NSLayoutConstraint *_labelWhenExpandedLeadingConstraint;
    UIImageView *_imageView;
    BOOL _expandsModally;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isLabelHidden) BOOL labelHidden;
@property (readonly, nonatomic) UIImageView *chevron;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeIncludingLabels;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expanded:(BOOL)a1 modally:(BOOL)a2;
- (void)buttonShapesEnabledDidChange;
- (void)toggleExpanded;
- (void)updateExpanded;

@end
