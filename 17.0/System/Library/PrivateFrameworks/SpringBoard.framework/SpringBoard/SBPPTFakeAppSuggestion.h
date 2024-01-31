@class NSUUID, NSString;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion {
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (id)activityType;
- (unsigned long long)hash;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)suggestedLocationName;

@end
