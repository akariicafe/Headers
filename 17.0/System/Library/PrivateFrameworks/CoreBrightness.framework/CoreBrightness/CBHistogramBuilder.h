@class NSArray, NSMutableArray;

@interface CBHistogramBuilder : NSObject <CBHistogram>

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (void)reset;
- (void)dealloc;
- (void)pushNumber:(double)a0;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1;
- (id)initWithEdges:(id)a0;

@end
