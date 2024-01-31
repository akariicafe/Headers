@interface RoomPlan.DollHouseCameraController : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ camera;
    void /* unknown type, empty encoding */ arView;
    void /* unknown type, empty encoding */ arViewSize;
    void /* unknown type, empty encoding */ panGestureRecognizer;
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ immediateLongPressRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pitchAdjustment;
    void /* unknown type, empty encoding */ startTapTime;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)didPanWithPanGesture:(id)a0;
- (void)didPinchWithPinchGesture:(id)a0;
- (void)didTouchDownWithLongPressGesture:(id)a0;

@end
