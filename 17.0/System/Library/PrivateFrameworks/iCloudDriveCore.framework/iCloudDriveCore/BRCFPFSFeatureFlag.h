@class NSUserDefaults;

@interface BRCFPFSFeatureFlag : NSObject {
    NSUserDefaults *_fpfsFeatureDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (void)fixFPFSFeatureFlagUserDefaultsIfNeeded;

@end
