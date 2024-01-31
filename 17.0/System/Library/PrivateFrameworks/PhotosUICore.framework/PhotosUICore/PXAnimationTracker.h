@interface PXAnimationTracker : NSObject

+ (void)_scrollAnimationOccurred:(long long)a0 isBegin:(BOOL)a1;
+ (void)_transitionAnimationOccurred:(long long)a0 fromOrigin:(long long)a1 transitionObject:(id)a2 isBegin:(BOOL)a3;
+ (void)scrollAnimationDidEnd:(long long)a0;
+ (void)transitionPreparationDidBegin:(long long)a0 fromOrigin:(long long)a1 transitionObject:(id)a2;
+ (void)scrollAnimationDidBegin:(long long)a0;
+ (void)transitionAnimationDidBegin:(long long)a0 fromOrigin:(long long)a1 transitionObject:(id)a2;
+ (void)_transitionPreparationOccurred:(long long)a0 fromOrigin:(long long)a1 transitionObject:(id)a2 isBegin:(BOOL)a3;
+ (void)transitionAnimationDidEnd:(long long)a0 fromOrigin:(long long)a1 transitionObject:(id)a2;

@end
