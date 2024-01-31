@class CALayer;

@interface PBUIViewportLayer : CALayer

@property (readonly, nonatomic) CALayer *contentLayer;
@property (nonatomic) double scale;

- (id)initWithScale:(double)a0;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)animationForKey:(id)a0;

@end
