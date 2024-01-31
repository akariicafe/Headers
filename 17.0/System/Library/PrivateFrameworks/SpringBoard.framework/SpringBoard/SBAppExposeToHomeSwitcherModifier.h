@class NSString, SBAppExposeGridSwitcherModifier;

@interface SBAppExposeToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    NSString *_bundleIdentifier;
    SBAppExposeGridSwitcherModifier *_appExposeModifier;
}

- (double)plusButtonAlpha;
- (BOOL)_isEffectivelyHome;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)transitionWillBegin;
- (id)_newAppExposeModifier;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 bundleIdentifier:(id)a2 appExposeModifier:(id)a3;

@end
