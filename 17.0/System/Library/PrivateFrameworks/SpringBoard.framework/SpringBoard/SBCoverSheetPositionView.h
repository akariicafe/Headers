@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView

@property (nonatomic) double progress;
@property (readonly, nonatomic) UIView *contentView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionContentForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 transformMode:(long long)a2 forPresentationValue:(BOOL)a3;
- (double)_progressForTouchLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_simulatedTouchLocationForProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positionContentForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (double)_progressFromContenViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_createContentView;

@end
