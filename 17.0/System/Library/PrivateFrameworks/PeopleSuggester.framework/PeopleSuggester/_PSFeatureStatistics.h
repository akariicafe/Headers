@class NSDictionary, NSMutableArray;

@interface _PSFeatureStatistics : NSObject

@property (retain, nonatomic) NSMutableArray *list;
@property double min;
@property double max;
@property double avg;
@property double stdev;
@property double mode;
@property (retain, nonatomic) NSDictionary *percentiles;

- (void)addValue:(id)a0;
- (id)initWithList:(id)a0;
- (void).cxx_destruct;
- (void)calculateStats;

@end
