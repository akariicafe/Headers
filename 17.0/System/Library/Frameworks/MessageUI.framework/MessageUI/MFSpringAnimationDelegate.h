@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks;

- (id)init;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
