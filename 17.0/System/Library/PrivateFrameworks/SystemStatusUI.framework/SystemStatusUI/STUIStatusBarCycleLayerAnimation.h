@class CALayer, CAAnimation, NSString;

@interface STUIStatusBarCycleLayerAnimation : NSObject <BSDebugDescriptionProviding>

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) CAAnimation *animation;
@property (retain, nonatomic) CAAnimation *originalAnimation;
@property (copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cycleAnimationWithLayer:(id)a0 animation:(id)a1 key:(id)a2;

- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
