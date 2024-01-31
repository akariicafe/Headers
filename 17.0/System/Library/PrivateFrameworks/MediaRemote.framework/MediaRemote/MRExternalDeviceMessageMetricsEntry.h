@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject

@property (nonatomic) unsigned long long avg;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long total;
@property (retain, nonatomic) NSMutableArray *values;

- (id)init;
- (void)updateWithValue:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
