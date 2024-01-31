@class MFSpringAnimationDelegate;

@interface MFSpringAnimation : CASpringAnimation

@property (retain, nonatomic) MFSpringAnimationDelegate *delegate;

+ (id)springAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;

- (id)init;
- (void)addCompletionBlock:(id /* block */)a0;

@end
