@interface CLRacingRoutePerformanceResults : NSObject

@property (readonly, nonatomic) double timeAhead_s;
@property (readonly, nonatomic) double currentDistance_m;
@property (readonly, nonatomic) double referenceDistance_m;
@property (readonly, nonatomic) double currentAveragePace_s_per_m;
@property (readonly, nonatomic) double totalOverlapDistance_m;
@property (readonly, nonatomic) unsigned long long state;

- (id)initWithTimeAhead:(double)a0 currentDistance:(double)a1 referenceDistance:(double)a2 currentAveragePace:(double)a3 totalOverlapDistance:(double)a4 state:(unsigned long long)a5;

@end
