@class NSObject, NSMutableDictionary, NSDateInterval;
@protocol HKHeartRateQueryHandler, OS_dispatch_queue;

@interface HKHeartRateQueryUtility : NSObject

@property (weak, nonatomic) id<HKHeartRateQueryHandler> queryHandler;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) long long timeScope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (retain, nonatomic) NSMutableDictionary *sampleResults;
@property (copy, nonatomic) id /* block */ resultsHandler;

+ (id)_minMaxStatisticsFromChartPoints:(id)a0 dateInterval:(id)a1;
+ (id)_orderedDisplayTypeContextResults:(id)a0;
+ (void)enumerateDisplayTypeContextsWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithQueryHandler:(id)a0 dateInterval:(id)a1 timeScope:(long long)a2 resultsHandler:(id /* block */)a3;
- (void)setupQueries;

@end
