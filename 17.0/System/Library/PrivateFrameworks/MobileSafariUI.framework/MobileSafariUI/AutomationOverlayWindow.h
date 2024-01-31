@protocol AutomationOverlayWindowDelegate;

@interface AutomationOverlayWindow : UIWindow

@property (weak, nonatomic) id<AutomationOverlayWindowDelegate> automationWindowDelegate;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
