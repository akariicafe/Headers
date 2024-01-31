@interface SBItemResizeGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) long long selectedLayoutRole;
@property (nonatomic) unsigned long long selectedEdge;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
