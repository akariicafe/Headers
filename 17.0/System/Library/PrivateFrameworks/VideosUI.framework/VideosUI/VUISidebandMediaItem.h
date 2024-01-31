@class VUIVideoManagedObject, NSObject;
@protocol VUIMediaEntityAssetController;

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;

- (id)releaseDate;
- (id)isPlayable;
- (id)seasonNumber;
- (void)dealloc;
- (id)addedDate;
- (id)storeID;
- (id)episodeNumber;
- (id)availabilityEndDate;
- (void).cxx_destruct;
- (id)brandName;
- (id)title;
- (id)duration;
- (id)showTitle;
- (id)assetType;
- (id)isLocal;
- (id)brandID;
- (id)canonicalID;
- (id)seasonTitle;
- (id)HLSColorCapability;
- (id)colorCapability;
- (BOOL)markedAsDeleted;
- (id)showCanonicalID;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)a0;
- (BOOL)allowsManualDownloadRenewal;
- (id)downloadExpirationDate;
- (id)episodeIndexInSeries;
- (id)fractionalEpisodeNumber;
- (id)genreTitle;
- (id)imageLoadParamsWithImageType:(unsigned long long)a0;
- (id)initWithMediaLibrary:(id)a0 videoManagedObject:(id)a1 requestedProperties:(id)a2;
- (BOOL)isFamilySharingContent;
- (BOOL)renewsOfflineKeysAutomatically;
- (id)seasonCanonicalID;
- (id)seasonIdentifier;
- (id)showIdentifier;

@end
