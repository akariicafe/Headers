@class OKWidgetView;

@interface OKWidgetContainerView : OFUIView {
    OKWidgetView *_widgetView;
}

@property (nonatomic) OKWidgetView *widgetView;

- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
