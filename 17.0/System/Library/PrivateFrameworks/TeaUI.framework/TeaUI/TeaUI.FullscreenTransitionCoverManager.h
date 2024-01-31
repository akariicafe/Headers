@interface TeaUI.FullscreenTransitionCoverManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ closure;
    void /* unknown type, empty encoding */ coverView;
    void /* unknown type, empty encoding */ transitioning;
    void /* unknown type, empty encoding */ dimmed;
}

- (void)didStartTransition;
- (void)didStartDimming;
- (void)didEndTransition;
- (void)didEndDimming;
- (void)willStartTransition;

@end
