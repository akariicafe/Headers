@interface _TtCV19ContactlessReaderUI11GestureView11Coordinator : NSObject <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleLongPressWithSender:(id)a0;
- (void)handleDoubleTap2FingersWithSender:(id)a0;
- (void)handleDoubleTap3FingersWithSender:(id)a0;
- (void)handleDoubleTapWithSender:(id)a0;
- (void)handlePanWithSender:(id)a0;
- (void)handleSwipe2FingersWithSender:(id)a0;
- (void)handleSwipeWithSender:(id)a0;
- (void)handleTap3FingersWithSender:(id)a0;
- (void)handleTapWithSender:(id)a0;
- (void)handleVeryLongPressWithSender:(id)a0;

@end
