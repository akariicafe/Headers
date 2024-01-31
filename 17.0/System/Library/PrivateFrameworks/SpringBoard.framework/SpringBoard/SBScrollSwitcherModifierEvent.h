@interface SBScrollSwitcherModifierEvent : SBSwitcherModifierEvent

@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (id)initWithContentOffset:(struct CGPoint { double x0; double x1; })a0 phase:(unsigned long long)a1 userInitiated:(BOOL)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
