@class NSDictionary, HDProfile, NSMutableDictionary;

@interface _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap : NSObject {
    HDProfile *_profile;
    NSDictionary *_canonicalBundleIDByBundleID;
    NSMutableDictionary *_bundleIDBySourceID;
}

+ (id)_canonicalSleepingWristTemperatureBundleIDByBundleIDWithProfile:(id)a0;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 quantityType:(id)a1;
- (id)_bundleIDForSourceID:(long long)a0 error:(id *)a1;
- (id)baselineCompatibilityIDForSourceID:(long long)a0;
- (id)predicateForDataEntitiesWithSourceIDsCompatibleWithSourceID:(long long)a0;

@end
