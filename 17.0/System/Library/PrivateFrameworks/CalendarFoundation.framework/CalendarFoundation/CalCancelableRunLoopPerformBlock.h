@class NSRunLoop;

@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable>

@property (readonly, nonatomic) NSRunLoop *runLoop;
@property (copy, nonatomic) id /* block */ block;

- (void)_performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)performAfterDelay:(double)a0;
- (id)initWithBlock:(id /* block */)a0 inRunLoop:(id)a1;

@end
