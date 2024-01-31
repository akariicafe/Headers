@class SBAppLayout;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
}

- (id)appLayoutsToResignActive;
- (BOOL)wantsAsynchronousSurfaceRetentionAssertion;
- (id)keyboardSuppressionMode;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)initWithActiveAppLayout:(id)a0;

@end
