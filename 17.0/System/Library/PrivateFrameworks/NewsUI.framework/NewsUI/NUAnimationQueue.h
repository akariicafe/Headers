@class NSMutableArray;

@interface NUAnimationQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *queue;
@property (nonatomic, getter=isRunning) BOOL running;

- (id)init;
- (void)runUntilEmpty;
- (void).cxx_destruct;
- (void)addAnimation:(id /* block */)a0;
- (void)cancel;

@end
