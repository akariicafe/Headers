@interface CAMDepthEffectSuggestionButton : CAMCircleButton

@property (nonatomic) long long mode;

- (void)setMode:(long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
