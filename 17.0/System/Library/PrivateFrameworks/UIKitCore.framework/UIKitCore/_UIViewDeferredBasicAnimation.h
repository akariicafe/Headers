@class _UIViewAnimationFrame;

@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {
    _UIViewAnimationFrame *_finalValue;
}

- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (id)_animationFrames;
- (void)addAnimationFrameForValue:(id)a0;
- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
