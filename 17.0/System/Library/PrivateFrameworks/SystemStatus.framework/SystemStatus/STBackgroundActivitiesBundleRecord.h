@class NSSet, NSDictionary;

@interface STBackgroundActivitiesBundleRecord : STBundleRecord_Base {
    NSDictionary *_backgroundActivitiesToVisualDescriptors;
}

@property (readonly, copy, nonatomic) NSSet *backgroundActivityIdentifiers;

+ (id)recordType;

- (void).cxx_destruct;
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)a0;
- (id)initWithBundleInfoDictionary:(id)a0 bundleRecordIdentifier:(id)a1 bundleURL:(id)a2;

@end
