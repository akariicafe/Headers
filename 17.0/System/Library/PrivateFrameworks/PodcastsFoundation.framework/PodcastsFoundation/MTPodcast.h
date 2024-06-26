@class NSUUID, NSString, NSSet, MTSyncInfo, NSDate, MTChannel, NSData;

@interface MTPodcast : NSManagedObject <IMMetricsDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL sortAscending;
@property (nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL playbackNewestToOldest;
@property (nonatomic) BOOL feedUpdateNeedsRetry;
@property (nonatomic) BOOL hasBeenSynced;
@property (nonatomic) BOOL importing;
@property (nonatomic, getter=isAuthenticatedDark) BOOL authenticatedDark;
@property (readonly, nonatomic, getter=isDark) BOOL dark;
@property (readonly, nonatomic, getter=isPastAutodownloadOrEpisodeLimitDark) BOOL autodownloadOrEpisodeLimitDark;
@property (nonatomic) BOOL needsArtworkUpdate;
@property (nonatomic, readonly) long long syncType;
@property (nonatomic, readonly) BOOL shouldBeDeleted;
@property (nonatomic, readonly) BOOL currentEpisodeLimitAllowsAutomaticDownloads;
@property (nonatomic, readonly) BOOL currentEpisodeLimitIsNextNEpisodes;
@property (nonatomic, readonly) BOOL shouldBeHiddenFromUpNext;
@property (nonatomic) double addedDate;
@property (retain, nonatomic) NSDate *latestExitFromDarkDownloads;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) BOOL autoDownloadEnabled;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) long long consecutiveFeedFetchErrors;
@property (nonatomic) long long darkCount;
@property (nonatomic) long long darkCountLocal;
@property (nonatomic) long long deletePlayedEpisodes;
@property (nonatomic) double downloadedDate;
@property (nonatomic) long long episodeLimit;
@property (retain, nonatomic) NSString *feedURL;
@property (nonatomic) long long flags;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int hidesPlayedEpisodes;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) double lastDatePlayed;
@property (nonatomic) double lastFetchedDate;
@property (nonatomic) double lastTouchDate;
@property (nonatomic) BOOL notifications;
@property (nonatomic) long long offerTypes;
@property (nonatomic) long long podcastPID;
@property (retain, nonatomic) NSString *provider;
@property (nonatomic) BOOL showPlacardForRemovePlayedEpisodes;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long storeCollectionId;
@property (retain, nonatomic) NSString *storeCleanURL;
@property (retain, nonatomic) NSString *storeShortURL;
@property (nonatomic) double latestEpisodeAvailabilityTime;
@property (nonatomic) double lastStoreEpisodesInfoCheckDate;
@property (nonatomic) double lastStorePodcastInfoCheckDate;
@property (nonatomic) BOOL subscribed;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) double updateAvg;
@property (nonatomic) double updatedDate;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (nonatomic) long long updateInterval;
@property (nonatomic) double updateStdDev;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSSet *playlists;
@property (retain, nonatomic) NSSet *playlistSettings;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) MTSyncInfo *syncInfo;
@property (retain, nonatomic) NSString *showTypeInFeed;
@property (nonatomic) long long showTypeSetting;
@property (retain, nonatomic) NSString *nextEpisodeUuid;
@property (nonatomic) double modifiedDate;
@property (retain, nonatomic) NSString *webpageURL;
@property (nonatomic) double feedChangedDate;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (retain, nonatomic) NSString *uberArtworkTextPrimaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextSecondaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextTertiaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextQuaternaryColor;
@property (nonatomic) long long channelStoreId;
@property (retain, nonatomic) MTChannel *channel;
@property (nonatomic) long long downloadedEpisodesCount;
@property (nonatomic) long long downloadedUnplayedEpisodesCount;
@property (nonatomic) long long savedEpisodesCount;
@property (nonatomic) long long savedUnplayedEpisodesCount;
@property (nonatomic) long long libraryEpisodesCount;
@property (nonatomic) long long newEpisodesCount;
@property (nonatomic) long long newTrailersCount;
@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *artworkTemplateURL;
@property (retain, nonatomic) NSString *artworkPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextSecondaryColor;
@property (retain, nonatomic) NSString *artworkTextTertiaryColor;
@property (retain, nonatomic) NSString *artworkTextQuaternaryColor;
@property (nonatomic) BOOL isImplicitlyFollowed;
@property (nonatomic) BOOL isHiddenOrImplicitlyFollowed;
@property (retain, nonatomic) NSData *implicitFollowsUnknownSyncProperties;
@property (nonatomic) double lastImplicitlyFollowedDate;
@property (retain, nonatomic) NSString *showSpecificUpsellCopy;
@property (nonatomic) double lastDismissedEpisodeUpsellBannerDate;
@property (nonatomic) double lastRemovedFromUpNextDate;
@property (copy, nonatomic) NSString *nextSyncToken;
@property (retain, nonatomic) NSUUID *bootstrapGeneration;
@property (copy, nonatomic) NSString *feedUniquenessHash;
@property (readonly, nonatomic) BOOL autoDownload;
@property (nonatomic) int autoDownloadType;
@property (nonatomic) long long keepEpisodes;
@property (nonatomic) BOOL orphanedFromCloud;
@property (nonatomic) BOOL showPlacardForOrphanedFromCloud;
@property (nonatomic) BOOL showPlacardForSavedEpisodes;

+ (long long)defaultShowType;
+ (id)predicateForAutoDownloadEnabled;
+ (id)predicateForPodcastWithFeedUrl:(id)a0;
+ (id)predicateForPodcastToAutoRemove;
+ (id)_predicateForShowsWithPlayableFreeEpisodes;
+ (BOOL)autoDownloadDefaultValue;
+ (double)defaultUpdateInterval;
+ (long long)deletePlayedEpisodesDefaultValue;
+ (long long)episodeLimitDefaultValue;
+ (id)episodeLimitsAllowingAutomaticDownloads;
+ (BOOL)isRedirectURL:(id)a0;
+ (id)podcastUuidForEpisodeUuid:(id)a0 ctx:(id)a1;
+ (id)predicateForAreMediaAPI:(BOOL)a0;
+ (id)predicateForEntitledShows;
+ (id)predicateForExcludingExplicitBasedOnSetting;
+ (id)predicateForHasBeenSynced:(BOOL)a0;
+ (id)predicateForHiddenOrImplicitlyFollowedPodcasts;
+ (id)predicateForHiddenPodcasts;
+ (id)predicateForIdentifer:(id)a0;
+ (id)predicateForImplicitlyFollowedPodcasts;
+ (id)predicateForImplicitlyFollowedPodcastsExcludingUUIDs:(id)a0;
+ (id)predicateForImporting:(BOOL)a0;
+ (id)predicateForLastDatePlayedAfterDate:(id)a0;
+ (id)predicateForLastDatePlayedNotInTheFuture;
+ (id)predicateForNonFollowedShowsWithPlayState;
+ (id)predicateForNotHiddenNotImplicitlyFollowedPodcasts;
+ (id)predicateForNotHiddenPodcasts;
+ (id)predicateForNotImplicitlyFollowedPodcasts;
+ (id)predicateForNotImplicitlyFollowedPodcastsWithChannelStoreId:(long long)a0;
+ (id)predicateForNotSubscribedAndNotHiddenAndNotImplicitlyFollowed;
+ (id)predicateForNotSubscribedPodcasts;
+ (id)predicateForPaidSubscriptionActive:(BOOL)a0;
+ (id)predicateForPeriodicallyUpdatablePodcasts;
+ (id)predicateForPodcastStoreIDs:(id)a0;
+ (id)predicateForPodcastStoreId:(long long)a0;
+ (id)predicateForPodcastUUID:(id)a0;
+ (id)predicateForPodcastUuids:(id)a0;
+ (id)predicateForPodcastWithPodcastPID:(long long)a0;
+ (id)predicateForPodcastWithTitle:(id)a0;
+ (id)predicateForPodcastsFetchedBefore:(id)a0;
+ (id)predicateForPodcastsFollowedSince:(id)a0;
+ (id)predicateForPodcastsNeedingRetry:(BOOL)a0;
+ (id)predicateForPodcastsToAutodownload;
+ (id)predicateForPodcastsUpdatedBefore:(id)a0;
+ (id)predicateForPodcastsWithBookmarkedEpisodes;
+ (id)predicateForPodcastsWithDownloadedEpisodes;
+ (id)predicateForPodcastsWithLibraryEpisodes;
+ (id)predicateForPodcastsWithUnplayedBookmarkedEpisodes;
+ (id)predicateForPodcastsWithUnplayedDownloadedEpisodes;
+ (id)predicateForSubscribedAndNotHidden;
+ (id)predicateForSubscribedPodcasts;
+ (id)predicateForWatchLibraryShows;
+ (id)productURLForStoreCollectionId:(long long)a0 storeTrackId:(long long)a1;
+ (id)propertiesToObserveForDownloadableEpisodes;
+ (id)redirectURLForStoreCollectionId:(long long)a0;
+ (long long)showTypeFromString:(id)a0;
+ (id)sortDescriptorsForNewestToOldest:(BOOL)a0;
+ (id)sortDescriptorsForNewestToOldestFirstTimeAvailable:(BOOL)a0;
+ (BOOL)sortOrderAscForShowType:(long long)a0;
+ (long long)storeCollectionIdForRedirectURL:(id)a0;
+ (unsigned long long)totalUnplayedCount;
+ (id)userDefaultPropertiesAffectingPredicates;

- (id)redirectURL;
- (id)shareURL;
- (void)setFlags:(long long)a0;
- (BOOL)isShareable;
- (void)setHidden:(BOOL)a0;
- (unsigned long long)levelForDownloadsOnSubscription;
- (id)oldestEpisodeExcludingExplicit:(long long)a0;
- (id)twitterShareURL;
- (id)updatedAtString;
- (id)_episodeNextToEpisode:(id)a0 after:(BOOL)a1 usePlayOrder:(BOOL)a2 restrictToUserEpisodes:(BOOL)a3 excludePlayed:(BOOL)a4 excludeExplicit:(long long)a5 episodeTypeFilter:(long long)a6;
- (id)_episodesNextTo:(double)a0 after:(BOOL)a1 usePlayOrder:(BOOL)a2 sortAsc:(BOOL)a3 restrictToUserEpisodes:(BOOL)a4 excludePlayed:(BOOL)a5 excludeExplicit:(long long)a6 episodeTypeFilter:(long long)a7 limit:(long long)a8;
- (id)_episodesNextTo:(double)a0 after:(BOOL)a1 usePlayOrder:(BOOL)a2 sortAsc:(BOOL)a3 sortByEpisodeNumber:(BOOL)a4 filter:(id)a5 limit:(long long)a6;
- (id)_episodesNextToEpisode:(id)a0 after:(BOOL)a1 usePlayOrder:(BOOL)a2 restrictToUserEpisodes:(BOOL)a3 excludePlayed:(BOOL)a4 excludeExplicit:(long long)a5 episodeTypeFilter:(long long)a6 limit:(long long)a7;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 filter:(id)a2;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 restrictToUserEpisodes:(BOOL)a2 excludePlayed:(BOOL)a3 excludeExplicit:(long long)a4;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 restrictToUserEpisodes:(BOOL)a2 excludePlayed:(BOOL)a3 excludeExplicit:(long long)a4 episodeTypeFilter:(long long)a5;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 restrictToUserEpisodes:(BOOL)a2 excludePlayed:(BOOL)a3 excludeExplicit:(long long)a4 excludingEpisodeUuid:(id)a5;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 restrictToUserEpisodes:(BOOL)a2 excludePlayed:(BOOL)a3 excludeExplicit:(long long)a4 excludingEpisodeUuid:(id)a5 episodeTypeFilter:(long long)a6;
- (id)_latestOrOldestEpisode:(BOOL)a0 sortDate:(unsigned long long)a1 restrictToUserEpisodes:(BOOL)a2 playStateFilter:(long long)a3 excludeExplicit:(long long)a4 excludingEpisodeUuid:(id)a5 episodeTypeFilter:(long long)a6;
- (void)applyFollowedShowSettingsFor:(long long)a0;
- (void)applyUnfollowedShowSettings;
- (id)bestAvailableStoreCleanURL;
- (id)bestFeedURLExcludingRedirectURL:(BOOL)a0;
- (void)calculateEpisodicNewEpisodeCountIn:(id)a0;
- (void)calculateNewEpisodeCountIn:(id)a0 serialShowsUseExperimentalRules:(BOOL)a1;
- (void)calculateSerialNewEpisodeCountIn:(id)a0;
- (double)calculatedUpdateInterval;
- (id)currentFeedURL;
- (BOOL)deletePlayedEpisodesResolvedValue;
- (id)displayURL;
- (id)earliestDateForFeedFetch:(id)a0;
- (long long)episodeLimitResolvedValue;
- (id)episodePublishedAfter:(double)a0 filter:(id)a1;
- (id)episodePublishedBefore:(double)a0 filter:(id)a1;
- (id)episodesInLatestSeasonWithLimit:(long long)a0;
- (id)episodesInSeasonNumber:(long long)a0;
- (id)episodesInSeasonNumber:(long long)a0 lowestNumberedEpisodesFirst:(BOOL)a1 filter:(id)a2 limit:(long long)a3;
- (id)episodesInSeasonNumber:(long long)a0 oldestEpisodesFirst:(BOOL)a1;
- (id)episodesInSeasonNumber:(long long)a0 oldestEpisodesFirst:(BOOL)a1 excludePlayed:(BOOL)a2 excludeExplicit:(long long)a3 episodeTypeFilter:(long long)a4 limit:(unsigned long long)a5;
- (id)episodesInSeasonNumber:(long long)a0 oldestEpisodesFirst:(BOOL)a1 excludePlayed:(BOOL)a2 excludeExplicit:(long long)a3 limit:(long long)a4;
- (id)episodesInSeasonNumber:(long long)a0 oldestEpisodesFirst:(BOOL)a1 filter:(id)a2 limit:(long long)a3;
- (id)episodesPublishedAfter:(double)a0 filter:(id)a1 limit:(long long)a2 sortAsc:(BOOL)a3;
- (id)highestNumberedEpisodePublishedBefore:(double)a0 filter:(id)a1;
- (id)highestNumberedPlayedEpisodeWithFilter:(id)a0;
- (BOOL)isSerialShowTypeInFeed;
- (long long)latestSeasonNumber;
- (id)lowestNumberedEpisodePublishedAfter:(double)a0 filter:(id)a1;
- (id)lowestNumberedEpisodeWithFilter:(id)a0;
- (id)metricsAdditionalData;
- (id)metricsContentIdentifier;
- (id)mostRecentlyPlayedEpisodeWithFilter:(id)a0;
- (long long)mt_syncID;
- (id)newestEpisode;
- (id)newestEpisodeByAvailabiltyTime;
- (id)newestEpisodeExcludingUuid:(id)a0 excludeExplicit:(long long)a1;
- (id)newestEpisodeWithFilter:(id)a0;
- (id)newestFullEpisode;
- (id)newestUserEpisodeExcludingExplicit:(long long)a0;
- (id)nextEpisodeNotPlayedExcludingExplicit:(long long)a0 episodeTypeFilter:(long long)a1;
- (id)nextNumberedUnplayedEpisodeAfter:(id)a0 filter:(id)a1;
- (id)oldestEpisodeExcludingExplicit:(long long)a0 episodeTypeFilter:(long long)a1;
- (id)oldestEpisodeInLatestSeasonOrShowWithFilter:(id)a0;
- (id)oldestUserEpisodeExcludingExplicit:(long long)a0;
- (BOOL)requestsAreNonAppInitiated;
- (void)resetGoDark;
- (void)setIsImplicitlyFollowed:(BOOL)a0;
- (void)setPodcastPID:(long long)a0;
- (long long)showTypeInFeedResolvedValue;
- (long long)showTypeUserSetting;
- (void)suppressEpisodesWithBasisDate:(id)a0;
- (void)updateIsHiddenOrImplicitlyFollowed;
- (void)updateLastImplicitlyFollowedDate;
- (void)updateLastTouchDate;
- (id)userEpisodesAfterEpisode:(id)a0;

@end
