@class NSUUID, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDHomeMetricsDispatcher : HMFObject <HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (void)submitMigrationEventMetricsForModel:(id)a0 reason:(id)a1;
- (void)submitMigrationEventMetricsForModels:(id)a0 reason:(id)a1;

@end
