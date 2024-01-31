@class NSObject;
@protocol OS_dispatch_queue;

@interface WFStatisticsEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue;

- (id)init;
- (void).cxx_destruct;
- (void)applyOperation:(long long)a0 onNumbers:(id)a1 completion:(id /* block */)a2;
- (void)applyOperation:(long long)a0 onStatisticsSampleProviders:(id)a1 completion:(id /* block */)a2;
- (void)asyncApplyNSExpressionFunction:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)averageOfValues:(id)a0 completion:(id /* block */)a1;
- (void)maximumOfValues:(id)a0 completion:(id /* block */)a1;
- (void)medianOfValues:(id)a0 completion:(id /* block */)a1;
- (void)minimumOfValues:(id)a0 completion:(id /* block */)a1;
- (void)modeOfValues:(id)a0 completion:(id /* block */)a1;
- (void)rangeOfValues:(id)a0 completion:(id /* block */)a1;
- (void)standardDeviationOfValues:(id)a0 completion:(id /* block */)a1;
- (void)sumOfValues:(id)a0 completion:(id /* block */)a1;

@end
