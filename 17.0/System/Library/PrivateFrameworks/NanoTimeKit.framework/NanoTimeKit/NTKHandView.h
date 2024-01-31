@class UIView;

@interface NTKHandView : CLKUIHandView {
    UIView *_transitionContainerView;
}

- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (id)transitionContainerView;
- (void)setInlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_initWithImage:(id)a0 forDevice:(id)a1;
- (void)setHandDotColor:(id)a0;
- (void)setInlayColor:(id)a0;

@end
