@class NSSet;

@interface MTPodcastEpisodeLimitHelper : NSObject

@property (class, nonatomic, readonly) NSSet *allGlobalLimits;

+ (BOOL)limitAllowsAutomaticDownloads:(long long)a0;

- (id)init;

@end
