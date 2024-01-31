@interface CKEntryViewBlurrableButtonContainer : UIView

@property (nonatomic) double blurRadius;

- (id)init;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
