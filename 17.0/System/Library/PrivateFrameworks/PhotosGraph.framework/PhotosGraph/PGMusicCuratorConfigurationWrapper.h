@interface PGMusicCuratorConfigurationWrapper : NSObject {
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) PGMusicCuratorConfigurationWrapper *defaultConfiguration;

@property (nonatomic, readonly) long long metadataPrefetchThresholdInDays;
@property (nonatomic, readonly) long long audioFilePrefetchThresholdInDays;

- (id)init;

@end
