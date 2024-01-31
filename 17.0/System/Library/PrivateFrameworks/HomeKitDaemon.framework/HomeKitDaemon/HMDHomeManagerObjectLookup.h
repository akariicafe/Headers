@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)_scanCloudZones;
- (void)_scanAccounts;
- (void)_scanHomes;
- (void)scanObjects;

@end
