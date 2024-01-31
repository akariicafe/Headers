@class NSString, NSMutableArray;

@interface PMRStopwatch : NSObject {
    NSMutableArray *_splitTimeStack;
}

@property (nonatomic) unsigned long long startTime;
@property unsigned long long coreAnimationTotalTime;
@property (copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSMutableArray *splitTimes;
@property (nonatomic) unsigned long long maxSplitTimes;

+ (id)sharedStopwatch;
+ (void)benchmarkBlockWithTitle:(id)a0 iterations:(unsigned long long)a1 usingBlock:(id /* block */)a2 onCompletion:(id /* block */)a3;
+ (void)setSharedStopwatch:(id)a0;

- (id)initWithDomain:(id)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)description;
- (void)_purgeOldestSplitTimeIfNeeded;
- (id)_subtreeDescription;
- (void)addSplit:(id)a0;
- (void)beginTimingGroupForMethod:(SEL)a0 inClass:(Class)a1 comment:(id)a2;
- (void)benchmarkBlockWithTitle:(id)a0 iterations:(unsigned long long)a1 currentIteration:(unsigned long long)a2 usingBlock:(id /* block */)a3 onCompletion:(id /* block */)a4;
- (id)descriptionWithFormat:(int)a0 key:(id)a1 comment:(id)a2;
- (void)endTimingGroup;
- (id)formattedUserInfoForSplitTime:(id)a0;
- (void)logEvent:(id)a0 comment:(id)a1;
- (void)logEvent:(id)a0 comment:(id)a1 userInfo:(id)a2;
- (void)logToLocation:(id)a0 key:(id)a1;
- (void)logWithFormat:(int)a0;
- (void)writeToFile:(id)a0 key:(id)a1 comment:(id)a2 fileFormat:(int)a3;

@end
