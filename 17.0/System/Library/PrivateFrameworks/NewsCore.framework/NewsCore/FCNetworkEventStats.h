@interface FCNetworkEventStats : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long mean;
@property (nonatomic) unsigned long long median;
@property (nonatomic) unsigned long long percentile95;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;

- (id)initWithValues:(id)a0;

@end
