@class NSString, MKAnalytics;

@interface MKPerformanceTable : MKTable

@property (retain, nonatomic) MKAnalytics *analytics;
@property (copy, nonatomic) NSString *basePath;

- (void)writeToDisk;
- (void).cxx_destruct;
- (id)createNumberFormatterWithLocale:(id)a0;
- (id)createSizeFormatter;
- (id)createThroughputFormatter;
- (id)createTimeFormatterWithLocale:(id)a0;
- (id)displayNamesByDataClass;
- (void)generateTableFromJSONFile:(id)a0;
- (id)importTimesByDataClass;
- (id)initWithJSONFile:(id)a0 analytics:(id)a1;

@end
