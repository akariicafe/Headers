@interface HKMCAdjacentFlowAnalyzer : NSObject {
    long long _futureFlowDay;
    long long _pastFlowDay;
}

@property (readonly, nonatomic) long long flowDayIndex;
@property (readonly, nonatomic, getter=isUnsuitableForRange) BOOL unsuitableForRange;

- (void)addNextAscendingDay:(id)a0 shouldStop:(BOOL *)a1;
- (void)addNextDescendingDay:(id)a0 shouldStop:(BOOL *)a1;
- (struct { long long x0; long long x1; })flowDayIndexRange;
- (id)initWithFlowDayIndex:(long long)a0;

@end
