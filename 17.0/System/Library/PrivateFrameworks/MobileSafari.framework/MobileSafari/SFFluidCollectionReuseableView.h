@class NSString, UIView, SFFluidCollectionViewLayoutAttributes;

@interface SFFluidCollectionReuseableView : UIView

@property (copy, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic, getter=_lastAppliedLayoutAttributes) SFFluidCollectionViewLayoutAttributes *lastAppliedLayoutAttributes;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)_applyLayoutAttributes:(id)a0;
- (void)pulse;

@end
