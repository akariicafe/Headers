@interface SBFixedLayoutModeSwitcherModifier : SBSwitcherModifier {
    long long _updateMode;
}

- (id)initWithUpdateMode:(long long)a0;
- (id)animationAttributesForLayoutElement:(id)a0;

@end
