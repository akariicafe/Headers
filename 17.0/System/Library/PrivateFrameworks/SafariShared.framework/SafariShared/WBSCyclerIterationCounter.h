@interface WBSCyclerIterationCounter : NSObject

@property (readonly, nonatomic) unsigned long long iterationCount;
@property (readonly, nonatomic) unsigned long long maximumIterationCount;
@property (readonly, nonatomic) BOOL hasReachedMaximumIterationCount;

- (id)init;
- (void)incrementIterationCount;
- (id)initWithMaximumIterationCount:(unsigned long long)a0;

@end
