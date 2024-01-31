@class NSCalendar, HKMHValenceDistributionSummaryQueryConfiguration;

@interface HDMHValenceDistributionSummaryQueryServer : HDQueryServer {
    HKMHValenceDistributionSummaryQueryConfiguration *_configuration;
    NSCalendar *_gregorianCalendar;
}

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)objectTypes;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; })_dayIndexRangeWithAnchorIndex:(long long)a0;
- (BOOL)_queue_surfaceValenceDistributionSummariesWithError:(id *)a0;

@end
