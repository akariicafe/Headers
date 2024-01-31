@class SBAppLayout;

@interface SBHighlightSwitcherModifier : SBSwitcherModifier {
    long long _layoutRole;
    SBAppLayout *_appLayout;
    SBAppLayout *_leafAppLayout;
    unsigned long long _phase;
    BOOL _listensForHighlightEvents;
}

@property (nonatomic) BOOL stylesCornerRadii;

- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForLayoutRole:(long long)a0 inAppLayout:(id)a1 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a2;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (BOOL)shouldAccessoryDrawShadowForAppLayout:(id)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleHighlightEvent:(id)a0;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 listensForHighlightEvents:(BOOL)a2;

@end
