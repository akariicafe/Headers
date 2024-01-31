@interface ScrollToTopView : UIView

@property (copy, nonatomic) id /* block */ targetBlock;
@property (copy, nonatomic) id /* block */ showBarsBlock;
@property (readonly, nonatomic) double defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_targetScrollView;
- (void)_showBars;
- (void)_tappedScrollToTopView:(id)a0;
- (id)initWithTargetBlock:(id /* block */)a0;

@end
