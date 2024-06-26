@class NSURL, IMPlayerManifest, NSDate, NSObject, MTEpisode, NSString, NSManagedObjectID, IMAVSecureKeyLoader, AVURLAsset, NSArray, IMPlayerArtwork, MPNowPlayingContentItem, MPArtworkCatalog, NSUUID;
@protocol OS_dispatch_queue;

@interface IMPlayerItem : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _objectIDLock;
}

@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) BOOL areChaptersLoading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chapterLoadingQueue;
@property (retain, nonatomic) MPNowPlayingContentItem *contentItem;
@property (retain, nonatomic) AVURLAsset *asset;
@property (retain, nonatomic) NSUUID *instanceIdentifier;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL areChaptersLoaded;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *author;
@property (nonatomic, getter=isVideo, setter=setIsVideo:) BOOL video;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (copy, nonatomic) NSString *podcastUuid;
@property (copy, nonatomic) NSString *podcastFeedUrl;
@property (copy, nonatomic) NSURL *podcastShareUrl;
@property (nonatomic) long long podcastStoreId;
@property (copy, nonatomic) NSURL *artworkUrl;
@property (nonatomic) BOOL isNotSubscribeable;
@property (nonatomic) BOOL enqueuedByAnotherUser;
@property (retain, nonatomic) NSString *episodeUuid;
@property (retain, nonatomic) NSString *episodeGuid;
@property (retain, nonatomic) NSManagedObjectID *episodeObjectID;
@property (nonatomic) long long episodeStoreId;
@property (nonatomic) long long episodePID;
@property (retain, nonatomic) NSDate *pubDate;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSURL *episodeShareUrl;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) MTEpisode *episode;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long episodeType;
@property (nonatomic) BOOL podcastIsSerial;
@property (retain, nonatomic) NSString *priceType;
@property (nonatomic) BOOL paidSubscriptionActive;
@property (copy, nonatomic) NSURL *alternatePaidURL;
@property (copy, nonatomic) NSString *podcastDisplayType;
@property (nonatomic) long long channelStoreId;
@property (nonatomic, getter=isEntitled) BOOL entitled;
@property (retain, nonatomic) IMAVSecureKeyLoader *secureKeyLoader;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (nonatomic) double duration;
@property (nonatomic) double playhead;
@property (nonatomic) long long playCount;
@property (readonly, weak, nonatomic) NSArray *timeChapters;
@property (readonly, weak, nonatomic) NSArray *metadataChapters;
@property (weak, nonatomic) IMPlayerManifest *manifest;
@property (nonatomic) unsigned long long manifestIndex;
@property (nonatomic) long long editingStyleFlags;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (retain, nonatomic) IMPlayerArtwork *uberArtworkProperties;
@property (retain, nonatomic) IMPlayerArtwork *showArtworkProperties;
@property (retain, nonatomic) IMPlayerArtwork *episodeArtworkProperties;
@property (nonatomic) BOOL isAppleMusicEpisode;
@property (nonatomic) BOOL isAppleNewsEpisode;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (BOOL)isShareable;
- (id)artworkIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)updateActivity:(id)a0;
- (BOOL)isStreamable;
- (BOOL)isAssetLoaded;
- (id)streamUrl;
- (id)contentItemIdentifier;
- (id)externalMetadata;
- (void)invalidateAsset;
- (BOOL)_isContentItemLoaded;
- (void)beginLoadingArtworkForAVPlayerItem:(id)a0;
- (id)chapterAtTime:(double)a0;
- (void)cleanupAfterError;
- (id)createAssetForUrl:(id)a0;
- (id)fetchArtworkItemProviderForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasChapterArtworkAtTime:(double)a0;
- (id)initWithEpisode:(id)a0;
- (id)initWithUrl:(id)a0;
- (void)loadChapters;
- (BOOL)notifyUserIsNotPlayable;
- (void)populateContentItem:(id)a0;
- (void)recreateContentItem;
- (void)retrieveArtwork:(id /* block */)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)retrieveArtwork:(id /* block */)a0 withSize:(struct CGSize { double x0; double x1; })a1 atTime:(double)a2;
- (id)retrieveChapterArtworkAtTime:(double)a0;
- (BOOL)supportsArtworkUrl;
- (void)updateContentItem;
- (BOOL)upgradeToAlternatePaidVersionIfNeeded;

@end
