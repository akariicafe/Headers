@class MSVTimer;

@interface MROptimisticState : NSObject

@property (readonly, nonatomic) MSVTimer *timer;
@property (readonly, nonatomic) id initialState;
@property (readonly, nonatomic) id expectedState;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInitialState:(id)a0 expectedState:(id)a1 timeout:(double)a2 queue:(id)a3 timeoutHandler:(id /* block */)a4;

@end
