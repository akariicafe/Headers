@class NSString, NSMutableArray;

@interface _UIEditMenuPresentationAnimator : NSObject <UIEditMenuInteractionAnimating>

@property (retain, nonatomic) NSMutableArray *animationBlocks;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addCompletion:(id /* block */)a0;
- (void)addAnimations:(id /* block */)a0;
- (void).cxx_destruct;
- (void)runAnimations;
- (void)runCompletions;

@end
