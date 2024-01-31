@class CALayer;

@interface PBUIImageContainerLayer : CALayer

@property (retain, nonatomic) CALayer *imageLayer;

+ (id)layer;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)animationForKey:(id)a0;

@end
