@class NSString;

@interface WKBokehBubble : CALayer <CAAnimationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
