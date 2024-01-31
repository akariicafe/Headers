@class NSMutableSet, NSMutableDictionary;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {
    double _frameDuration;
    double _frameStartTime;
    long long _calculationMode;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
    BOOL _inFrame;
}

- (id)init;
- (id)_updateAnimationFrameWithAnimationProperties:(id)a0;
- (id)_createDeferredAnimationForKey:(id)a0;
- (void)addKeyframeWithRelativeStartTime:(double)a0 relativeDuration:(double)a1 animations:(id /* block */)a2;
- (void)cleanupTrackedLayers;
- (void).cxx_destruct;
- (void)pop;
- (BOOL)_isKeyframeAnimation;
- (void)setupWithDuration:(double)a0 delay:(double)a1 view:(id)a2 options:(unsigned long long)a3 factory:(id)a4 parentState:(id)a5 start:(id /* block */)a6 completion:(id /* block */)a7;
- (id)animationForLayer:(id)a0 forKey:(id)a1 forView:(id)a2;

@end
