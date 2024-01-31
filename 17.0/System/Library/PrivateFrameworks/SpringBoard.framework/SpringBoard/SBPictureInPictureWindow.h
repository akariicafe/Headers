@class SBPIPContainerViewController;

@interface SBPictureInPictureWindow : UIWindow

@property (retain, nonatomic) SBPIPContainerViewController *rootViewController;

- (void)setRootViewController:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (void)setWindowScene:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_allowsOcclusionDetectionOverride;

@end
