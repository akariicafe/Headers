@class NSString, NSArray, NSURL, NSPredicate, NSDateInterval;

@interface PPSSQLiteTimeIntervalSetIngester : NSObject <PPSDataIngesterProtocol> {
    id _metricDefinition;
}

@property (readonly) NSURL *filepath;
@property (readonly, copy) NSString *sourceName;
@property (readonly, copy) NSArray *metricNames;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSDateInterval *timeFilter;

+ (unsigned long long)_directionalityForMetricDefinition:(id)a0;
+ (id)filterIntervalSet:(id)a0 withTimeWindow:(id)a1;

- (id)parseData:(id *)a0;
- (void).cxx_destruct;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricDefinition:(id)a2 predicate:(id)a3 timeFilter:(id)a4;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricName:(id)a2 predicate:(id)a3 timeFilter:(id)a4;

@end
