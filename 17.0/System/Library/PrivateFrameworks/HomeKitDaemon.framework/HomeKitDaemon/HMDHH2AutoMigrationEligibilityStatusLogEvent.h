@class NSString, NSDictionary, NSUUID, HMDHH2AutoMigrationEligibilityResult;

@interface HMDHH2AutoMigrationEligibilityStatusLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserAutoMigrationEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerManualEligibilityResult;
@property (readonly) HMDHH2AutoMigrationEligibilityResult *currentUserMigrationByOwnerAutoEligibilityResult;
@property (readonly) BOOL didRunMigrationTaskOnCurrentBuild;
@property (readonly) BOOL currentBuildStartedOnHH1;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAutoMigrationEligibilityResult:(id)a0 migrationByOwnerManualEligibilityResult:(id)a1 migrationByOwnerAutoEligibilityResult:(id)a2 didRunMigrationTaskOnCurrentBuild:(BOOL)a3 currentBuildStartedOnHH1:(BOOL)a4;

@end
