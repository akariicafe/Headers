@class NSString;

@interface RMTimedDispatch : NSObject

@property (copy) id /* block */ timerCompletionBlock;
@property (retain) NSString *timerID;
@property BOOL complete;

+ (id)timedDispatchAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)cancel;
- (id)initAfterInterval:(double)a0 completionBlock:(id /* block */)a1;

@end
