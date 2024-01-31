@class NSString, NSArray, NSURL, NSPredicate, NSDateInterval, PPSValueConverter;

@interface PPSSQLiteHistogramIngester : NSObject <PPSDataIngesterProtocol> {
    NSArray *_dimensions;
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
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricDefinitions:(id)a2 predicate:(id)a3 timeFilter:(id)a4 dimensions:(id)a5 convertValue:(BOOL)a6;
- (id)initWithFilepath:(id)a0 tableName:(id)a1 metricNames:(id)a2 predicate:(id)a3 timeFilter:(id)a4 dimensions:(id)a5;

@end
