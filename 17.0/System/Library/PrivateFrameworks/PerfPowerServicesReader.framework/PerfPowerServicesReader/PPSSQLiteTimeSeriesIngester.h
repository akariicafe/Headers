@class PPSValueConverter, NSString, NSArray, NSURL, NSPredicate, NSDateInterval, PPSTimestampConverter;

@interface PPSSQLiteTimeSeriesIngester : NSObject <PPSDataIngesterProtocol> {
    unsigned long long _limitCount;
    unsigned long long _offsetCount;
    unsigned long long _readDirection;
    BOOL _convertTimestamp;
    PPSTimestampConverter *_timestampConverter;
    PPSValueConverter *_valueConverter;
}

@property (readonly) NSURL *filepath;
@property (readonly, copy) NSString *sourceName;
@property (readonly, copy) NSArray *metricNames;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSDateInterval *timeFilter;

- (id)parseData:(id *)a0;
- (void).cxx_destruct;
- (id)_convertSQLiteDataFromQuery:(id)a0 withProperties:(id)a1 error:(id *)a2;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricDefinitions:(id)a2 predicate:(id)a3 timeFilter:(id)a4 limitCount:(unsigned long long)a5 offsetCount:(unsigned long long)a6 readDirection:(unsigned long long)a7 convertTimestamp:(BOOL)a8 convertValue:(BOOL)a9;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricNames:(id)a2 predicate:(id)a3 timeFilter:(id)a4 limitCount:(unsigned long long)a5 offsetCount:(unsigned long long)a6 readDirection:(unsigned long long)a7 convertTimestamp:(BOOL)a8;

@end
