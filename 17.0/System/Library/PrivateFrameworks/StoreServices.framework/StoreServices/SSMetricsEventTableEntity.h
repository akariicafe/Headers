@class NSDictionary;

@interface SSMetricsEventTableEntity : SSSQLiteEntity {
    NSDictionary *_reportingDictionary;
}

+ (id)databaseTable;

- (void)dealloc;
- (id)reportingDictionary;
- (id)reportingJSON;
- (void).cxx_destruct;
- (id)reportingCanaryIdentifier;

@end
