@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {
    id /* block */ _progressHandler;
}

@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;
+ (id)layerForView:(id)a0 withUpdateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;
- (void)animationCompletedWithPosition:(long long)a0;

@end
