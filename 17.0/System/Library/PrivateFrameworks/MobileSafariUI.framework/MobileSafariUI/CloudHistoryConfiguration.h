@class NSArray, NSDictionary;

@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration {
    NSArray *_assetsSortedByVersionNumber;
    NSDictionary *_remoteConfigurationDictionary;
    BOOL _fetchedAssetData;
}

+ (id)sharedConfiguration;

- (id)init;
- (BOOL)shouldUseLongLivedOperationsToSaveRecords;
- (id)_cloudConfigurationAssetsSortedByVersionNumber;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;
- (void)_reloadConfigurationDataIfNecessary;
- (void).cxx_destruct;

@end
