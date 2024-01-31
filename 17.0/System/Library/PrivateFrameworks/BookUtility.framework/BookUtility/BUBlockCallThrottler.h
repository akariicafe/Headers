@class NSDate;

@interface BUBlockCallThrottler : NSObject

@property (retain, nonatomic) NSDate *lastBlockCallDate;
@property (nonatomic) BOOL running;
@property (nonatomic) double minimumTimeBetweenCalls;

- (id)init;
- (void)runBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_runBlock:(id /* block */)a0 throttle:(BOOL)a1;
- (BOOL)runBlockThrottled:(id /* block */)a0;

@end
