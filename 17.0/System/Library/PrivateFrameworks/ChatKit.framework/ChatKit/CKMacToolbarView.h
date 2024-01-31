@protocol CKMacToolbarViewDelegate;

@interface CKMacToolbarView : UIView

@property (weak, nonatomic) id<CKMacToolbarViewDelegate> delegate;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
