@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {
    NSString *_suppressionReason;
}

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly, nonatomic) long long completionType;

- (void)_didComplete;
- (void)_begin;
- (void)_setupAnimation;
- (id)initWithTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (void)_beginAnimation;
- (void)_finishWithCompletionType:(long long)a0;
- (void)finishWithCompletionType:(long long)a0;
- (BOOL)shouldSuppressMedusaKeyboardDuringGesture;
- (void)systemGestureStateChanged:(id)a0;

@end
