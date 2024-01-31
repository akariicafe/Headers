@class NSMutableDictionary;

@interface CVNLPPerformance : NSObject

@property (readonly, nonatomic) BOOL computePerf;
@property (readonly, nonatomic) NSMutableDictionary *results;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)run:(id)a0 block:(id /* block */)a1;

@end
