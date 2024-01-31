@class UIColor, NSString, CALayer, CAReplicatorLayer, UITraitCollection;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>

@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } smallBubbleGrowOffset;
@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } mediumBubbleGrowOffset;
@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } largeBubbleGrowOffset;
@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } thinkingDotsOffset;
@property (class, readonly, nonatomic) double iconImageTrailingSpace;
@property (class, readonly, nonatomic) double thinkingDotDiameter;
@property (class, readonly, nonatomic) double thinkingDotSpace;
@property (class, readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconImageFrame;
@property (class, readonly, nonatomic) BOOL supportsTypingIndicatorAnimation;

@property (readonly, nonatomic) UIColor *defaultBubbleColor;
@property (readonly, nonatomic) UIColor *defaultThinkingDotColor;
@property (readonly, nonatomic) double defaultBubbleOpacity;
@property (readonly, nonatomic) double defaultThinkingDotOpacity;
@property (retain, nonatomic) CALayer *bubbleContainer;
@property (retain, nonatomic) CALayer *smallBubble;
@property (retain, nonatomic) CALayer *mediumBubble;
@property (retain, nonatomic) CALayer *largeBubble;
@property (retain, nonatomic) CALayer *thinkingDotContainer;
@property (retain, nonatomic) CALayer *thinkingDot;
@property (retain, nonatomic) CAReplicatorLayer *thinkingDots;
@property (retain, nonatomic) CALayer *iconImageLayer;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) id iconImage;
@property (copy, nonatomic) UIColor *bubbleColor;
@property (copy, nonatomic) UIColor *thinkingDotColor;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) double bubbleOpacity;
@property (nonatomic) double thinkingDotOpacity;
@property (copy, nonatomic) UIColor *customBubbleColor;
@property (nonatomic) BOOL hasDarkBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largeBubbleFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediumBubbleFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smallBubbleFrame;

- (id)init;
- (void)_setup;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_buildIconImage;
- (void)_updateForImage;
- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)_largeBubblePulseAnimationWithSpeed:(double)a0 delay:(double)a1;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)a0 delay:(double)a1;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)_smallBubblePulseAnimationWithSpeed:(double)a0 delay:(double)a1;
- (void)_updateBubbleColors;
- (void)_updateBubbleOpacity;
- (double)convertedCurrentMediaTime;
- (id)initHighlighted:(BOOL)a0;
- (id)resolvedColor:(id)a0 forTraitCollection:(id)a1;
- (void)startGrowAnimation;
- (void)startGrowAnimationWithCompletionBlock:(id /* block */)a0;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)a0;
- (void)stopPulseAnimation;

@end
