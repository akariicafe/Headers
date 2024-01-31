@class SBAppLayout;

@interface SBHighlightSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic, getter=isHoverEvent) BOOL hoverEvent;
@property (readonly, nonatomic, getter=isPencilHoverEvent) BOOL pencilHoverEvent;

- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 phase:(unsigned long long)a2 hover:(BOOL)a3 pencilHover:(BOOL)a4;

@end
