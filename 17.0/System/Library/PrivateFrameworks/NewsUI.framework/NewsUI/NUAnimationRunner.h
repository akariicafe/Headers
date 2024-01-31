@interface NUAnimationRunner : NSObject

@property (readonly, nonatomic) id /* block */ runBlock;

- (id)initWithRunBlock:(id /* block */)a0;
- (void)runWithFinishBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
