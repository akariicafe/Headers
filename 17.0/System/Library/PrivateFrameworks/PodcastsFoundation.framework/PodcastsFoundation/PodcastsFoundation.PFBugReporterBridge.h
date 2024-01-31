@interface PodcastsFoundation.PFBugReporterBridge : NSObject

+ (void)reportMissingFairPlayOfflineKey;
+ (void)reportKeyIntegrityError;

- (id)init;

@end
