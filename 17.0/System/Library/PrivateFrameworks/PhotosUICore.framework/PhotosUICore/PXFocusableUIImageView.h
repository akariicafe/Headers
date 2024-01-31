@interface PXFocusableUIImageView : UIImageView

@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) BOOL drawsFocusRing;
@property (nonatomic) BOOL reusable;

- (id)focusEffect;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isEligibleForFocusInteraction;
- (id)initWithCoder:(id)a0;

@end
