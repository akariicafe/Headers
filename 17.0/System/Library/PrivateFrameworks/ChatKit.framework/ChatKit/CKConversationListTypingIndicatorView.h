@class CKConversationListTypingIndicatorLayer;

@interface CKConversationListTypingIndicatorView : UIView

@property (retain, nonatomic) CKConversationListTypingIndicatorLayer *typingLayer;
@property (nonatomic) BOOL isDarkAqua;
@property (nonatomic) double typingIndicatorScale;
@property (nonatomic, getter=isHighlighted) BOOL highlightedState;
@property (nonatomic) BOOL flipForRTLLayout;

- (id)init;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_updateTypingLayerTransform;
- (void)destroyTypingLayer;
- (void)resetTypingLayer;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;

@end
