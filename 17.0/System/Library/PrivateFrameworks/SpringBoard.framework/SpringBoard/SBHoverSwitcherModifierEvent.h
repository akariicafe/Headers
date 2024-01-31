@interface SBHoverSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhase:(unsigned long long)a0 position:(struct CGPoint { double x0; double x1; })a1;

@end
