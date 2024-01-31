@interface CAMAutoMacroButton : CAMCircleButton

@property (nonatomic) BOOL active;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageNameForCurrentState;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
