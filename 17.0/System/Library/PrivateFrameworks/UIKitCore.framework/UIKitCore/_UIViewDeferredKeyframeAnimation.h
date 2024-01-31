@class NSMutableArray;

@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation {
    NSMutableArray *_animationFrames;
}

- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (void)_finalize;
- (id)_animationFrames;
- (void)addAnimationFrameForValue:(id)a0;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
