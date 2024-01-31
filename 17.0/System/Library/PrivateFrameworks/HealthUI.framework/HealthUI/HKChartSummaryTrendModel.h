@class NSArray, NSMutableArray;

@interface HKChartSummaryTrendModel : NSObject

@property (retain, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) BOOL selectTrendInitially;
@property (readonly, nonatomic) NSArray *timeScopeTrends;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithTimeScopeTrends:(id)a0 selectTrendInitially:(BOOL)a1;
- (void)_notifyObserversTrendModelChanged;
- (void)updateChartSummaryTrendModel:(id)a0;

@end
