@interface SBTestTransitionSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _shouldAsyncRenderUntilDelay;
    double _delay;
}

- (BOOL)shouldAsyncRenderUntilDelay:(inout double *)a0;
- (void)setshouldAsyncRenderUntilDelay:(double)a0;

@end
