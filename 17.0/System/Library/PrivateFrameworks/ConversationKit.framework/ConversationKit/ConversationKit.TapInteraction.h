@interface ConversationKit.TapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ view;
@property (nonatomic) long long numberOfTapsRequired;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)init;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)handleRecognizer:(id)a0;

@end
