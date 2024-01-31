@class UIView;

@interface SBLoginAppContainerPluginWrapperView : UIView {
    UIView *_overlayWrapperView;
    UIView *_pluginView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overlayWrapperView:(id)a1 pluginView:(id)a2;

@end
