@interface ConversationKit.PushToTalkTalkButtonGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ interval;
    void /* unknown type, empty encoding */ maximumVerticalVelocity;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ previous;
    void /* unknown type, empty encoding */ recognizedGestureWorkItem;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
