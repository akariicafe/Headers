@class HMDHomeManager, NSString, HMDAppleAccountManager, NSUserDefaults;
@protocol HMDFeaturesDataSource;

@interface HMDHH2AutoMigrationEligibilityChecker : HMFObject <HMFLogging> {
    HMDAppleAccountManager *_accountManager;
    id<HMDFeaturesDataSource> _featuresDataSource;
    NSUserDefaults *_userDefaults;
}

@property (copy) id /* block */ isHSA2Enabled;
@property (copy) id /* block */ frameworkSwitchProvider;
@property (weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)fetchIsCurrentUserEligibleForAutoMigrationWithCompletion:(id /* block */)a0;
- (void)fetchIsCurrentUserEligibleForMigrationByOwnerWithCompletion:(id /* block */)a0;
- (id)initWithHomeManager:(id)a0 accountManager:(id)a1 featuresDataSource:(id)a2 userDefaults:(id)a3;

@end
