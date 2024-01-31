@class NSString, HDSPEnvironment;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (BOOL)needDataMigration;
- (id)initWithEnvironment:(id)a0;
- (id)performDataMigration;
- (id)_migrateSleepFocus;
- (void).cxx_destruct;
- (id)_migrateSleepScheduleFromMobileTimer;
- (id)_migrateHomeScreenPage;
- (id)_migrateToCloudKit;
- (id)_migrateOnboardingSettings;

@end
