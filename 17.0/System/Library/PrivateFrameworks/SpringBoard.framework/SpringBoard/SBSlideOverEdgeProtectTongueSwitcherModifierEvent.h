@interface SBSlideOverEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented;
@property (readonly, nonatomic) unsigned long long edge;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTonguePresented:(BOOL)a0 edge:(unsigned long long)a1;

@end
