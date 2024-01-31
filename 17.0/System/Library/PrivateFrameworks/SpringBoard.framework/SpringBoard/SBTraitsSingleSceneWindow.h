@interface SBTraitsSingleSceneWindow : SBFWindow

@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible;

+ (BOOL)_isSecure;

- (void)setRootViewController:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (id)rootViewController;
- (BOOL)isContentHidden;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
