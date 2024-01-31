@interface SBScrunchGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) struct CGPoint { double x; double y; } initialCentroid;
@property (nonatomic) struct CGPoint { double x; double y; } centroid;
@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint { double x; double y; } translationWithoutScale;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
