@interface UIDictationATVLinearView : UIDictationView

- (BOOL)isShowing;
- (BOOL)drawsOwnBackground;
- (void)removeFromSuperview;
- (void)setRenderConfig:(id)a0;
- (void)setState:(int)a0;
- (void)finishReturnToKeyboard;
- (void)returnToKeyboard;
- (void)layoutSubviews;

@end
