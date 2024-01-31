@interface WebAnimationDelegate : NSObject {
    void *m_owner;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setOwner:(void *)a0;
- (void)animationDidStart:(id)a0;

@end
