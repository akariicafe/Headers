@class NSString;

@interface MTEpisodeSyncStorage : NSObject <MTEpisodeSyncProcessorStorageProviding>

@property (retain, nonatomic) NSString *podcastsDomainVersion;

- (id)feedUrlFromModernKey:(id)a0;
- (id)importContext;
- (id)modernKeyFromFeedUrl:(id)a0;
- (void)resetVersionForAllFeedUrls;
- (void)resetVersionForFeedUrl:(id)a0;
- (void)setVersion:(id)a0 forKey:(id)a1;
- (id)versionForKey:(id)a0;

@end
