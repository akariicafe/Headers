@interface PVMotionEffectHitAreaComponent : PVMotionEffectComponent <PVEffectHitArea>

+ (id)motionEffectPropertyKeyToPublishedParameterNameMap;

- (id)hitAreaPointsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forcePosterFrame:(BOOL)a1 includeDropShadow:(BOOL)a2 scale:(struct CGPoint { double x0; double x1; })a3 viewSize:(struct CGSize { double x0; double x1; })a4 viewOrigin:(int)a5;

@end
