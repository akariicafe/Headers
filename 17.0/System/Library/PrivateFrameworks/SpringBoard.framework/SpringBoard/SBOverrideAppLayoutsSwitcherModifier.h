@class NSArray, NSOrderedSet;

@interface SBOverrideAppLayoutsSwitcherModifier : SBSwitcherModifier {
    NSArray *_appLayouts;
    unsigned long long _appLayoutsGenerationCount;
    NSOrderedSet *_continuousExposeIdentifiers;
}

- (void)didMoveToParentModifier:(id)a0;
- (id)appLayouts;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (unsigned long long)appLayoutsGenerationCount;
- (id)initWithAppLayouts:(id)a0;

@end
