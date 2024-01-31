@class _UIBarCustomizationChiclet;

@interface _UIBarCustomizationReservoirCell : UICollectionViewCell

@property (retain, nonatomic) _UIBarCustomizationChiclet *chiclet;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
