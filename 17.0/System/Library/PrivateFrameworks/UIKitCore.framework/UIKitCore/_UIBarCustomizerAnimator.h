@class NSString, NSMutableArray;

@interface _UIBarCustomizerAnimator : NSObject <_UIBarCustomizerAnimating>

@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performAllAnimations;
- (void)performAllCompletionsWithSession:(id)a0;

@end
