@protocol JFXPassThroughContainerViewDelegate;

@interface JFXPassThroughContainerView : UIView

@property (weak, nonatomic) id<JFXPassThroughContainerViewDelegate> delegate;
@property (nonatomic) BOOL shouldDelegatePointInside;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
