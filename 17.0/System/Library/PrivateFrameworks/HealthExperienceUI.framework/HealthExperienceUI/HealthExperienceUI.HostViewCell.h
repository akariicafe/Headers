@interface HealthExperienceUI.HostViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ recreateViewControllerOnHostedFeedItemChange;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ sectionContext;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;

@end
