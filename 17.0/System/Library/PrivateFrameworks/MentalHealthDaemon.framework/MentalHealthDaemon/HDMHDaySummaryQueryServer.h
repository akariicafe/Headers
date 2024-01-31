@class HKMHDaySummaryQueryConfiguration;

@interface HDMHDaySummaryQueryServer : HDQueryServer {
    HKMHDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)objectTypes;
- (void).cxx_destruct;
- (BOOL)_queue_surfaceDaySummariesWithError:(id *)a0;

@end
