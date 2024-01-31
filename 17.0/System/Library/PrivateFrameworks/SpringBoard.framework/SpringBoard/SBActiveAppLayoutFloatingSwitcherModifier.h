@class SBStackedFloatingSwitcherModifier, _SBActiveAppFloorFloatingSwitcherModifier;

@interface SBActiveAppLayoutFloatingSwitcherModifier : SBSwitcherModifier {
    SBStackedFloatingSwitcherModifier *_stackedModifier;
    _SBActiveAppFloorFloatingSwitcherModifier *_floorModifier;
}

- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)a0 floatingConfiguration:(long long)a1 environmentMode:(long long)a2;

@end
