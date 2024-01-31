@class NSArray, NSMutableArray;

@interface MTPAFPlaylist : NSObject

@property (copy) NSArray *metricsData;
@property (retain, nonatomic) NSMutableArray *items;

- (void).cxx_destruct;
- (id)currentItems;
- (void)addItemStartAtMilliseconds:(unsigned long long)a0 durationMilliseconds:(unsigned long long)a1 metricsData:(id)a2;
- (void)addItemStartAtMilliseconds:(unsigned long long)a0 endAtMilliseconds:(unsigned long long)a1 metricsData:(id)a2;
- (void)addItemStartAtSeconds:(double)a0 durationSeconds:(double)a1 metricsData:(id)a2;
- (void)updateEventData:(id)a0;
- (id)initWithSharedMetricsData:(id)a0;

@end
