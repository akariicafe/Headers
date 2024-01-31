@interface VFXCore.DisplayClock : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ tickHandlers;
    void /* unknown type, empty encoding */ tickHandlersForThisFrame;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ isRenderClock;
    void /* unknown type, empty encoding */ _pausedOnBackgrounding;
}

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;

@end
