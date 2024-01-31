@class NSString;

@interface MTSyncUtil : NSObject

@property (class, retain, nonatomic) NSString *podcastsDomainVersion;

+ (BOOL)isNonFollowedShowsSyncDirtyFlag;
+ (BOOL)bookmarksSyncDirtyFlagForSyncType:(long long)a0;
+ (BOOL)isSubscriptionSyncEnabled;
+ (BOOL)playlistSyncDirtyFlag;
+ (void)setBookmarksSyncDirtyFlag:(BOOL)a0 syncType:(long long)a1;
+ (void)setNonFollowedShowsSyncDirtyFlag:(BOOL)a0;
+ (void)setPlaylistSyncDirtyFlag:(BOOL)a0;
+ (void)setSubscriptionSyncDirtyFlag:(BOOL)a0 syncType:(long long)a1;
+ (BOOL)subscriptionSyncDirtyFlagForSyncType:(long long)a0;
+ (id)userDefaultsKeyForBookmarksSyncType:(long long)a0;
+ (id)userDefaultsKeyForSubscriptionSyncType:(long long)a0;

@end
