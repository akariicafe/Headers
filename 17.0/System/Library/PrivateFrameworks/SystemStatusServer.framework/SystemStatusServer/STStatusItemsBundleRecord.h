@class NSSet, NSDictionary;

@interface STStatusItemsBundleRecord : STBundleRecord_Base {
    NSDictionary *_statusItemsToVisualDescriptors;
}

@property (readonly, copy, nonatomic) NSSet *statusItemIdentifiers;

+ (id)recordType;

- (void).cxx_destruct;
- (id)initWithBundleInfoDictionary:(id)a0 bundleRecordIdentifier:(id)a1 bundleURL:(id)a2;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)a0;

@end
