@interface BPSAggregator : NSObject

@property (readonly, nonatomic) id accumulator;
@property (readonly, nonatomic) id /* block */ closure;

- (void).cxx_destruct;
- (id)initWithAccumulator:(id)a0 closure:(id /* block */)a1;

@end
