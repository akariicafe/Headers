@class NSMutableArray;

@interface FedStatsDataSampler : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long total;
@property (retain, nonatomic) NSMutableArray *results;

+ (id)pickSamplesFrom:(id)a0 length:(unsigned long long)a1;
+ (id)samplerWithCount:(unsigned long long)a0;

- (void)addItems:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)getResults;

@end
