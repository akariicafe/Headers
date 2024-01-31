@class VUIMediaItemCredits, NSString, MPMediaItem, NSURL, NSDate, NSNumber, NSObject;
@protocol VUIMediaEntityIdentifier;

@interface VUIMediaItem : VUIMediaEntity

@property (readonly, nonatomic) MPMediaItem *mediaPlayerMediaItem;
@property (readonly, copy, nonatomic) NSNumber *assetType;
@property (readonly, copy, nonatomic) NSNumber *isPlayable;
@property (readonly, copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) NSString *previewFrameImageIdentifier;
@property (readonly, copy, nonatomic) NSURL *extrasURL;
@property (readonly, copy, nonatomic) NSString *seasonTitle;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (readonly, copy, nonatomic) NSString *seasonCanonicalID;
@property (readonly, copy, nonatomic) NSString *showCanonicalID;
@property (readonly, copy, nonatomic) NSNumber *episodeNumber;
@property (readonly, copy, nonatomic) NSNumber *fractionalEpisodeNumber;
@property (readonly, copy, nonatomic) NSNumber *episodeIndexInSeries;
@property (readonly, copy, nonatomic) NSString *studio;
@property (readonly, copy, nonatomic) VUIMediaItemCredits *credits;
@property (readonly, copy, nonatomic) NSNumber *rentalPlaybackDuration;
@property (readonly, copy, nonatomic) NSDate *rentalExpirationDate;
@property (readonly, copy, nonatomic) NSDate *downloadExpirationDate;
@property (readonly, copy, nonatomic) NSDate *availabilityEndDate;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly, nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (copy, nonatomic) NSNumber *hasBeenPlayed;
@property (copy, nonatomic) NSNumber *playCount;
@property (copy, nonatomic) NSNumber *bookmark;
@property (readonly, nonatomic) BOOL isFamilySharingContent;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)_mediaItemWithMPMediaItem:(id)a0;
+ (id)keyPathsForValuesAffectingPlayedState;

- (id)creationDate;
- (id)description;
- (void).cxx_destruct;
- (id)modifiedDate;
- (id)lastPlayedDate;

@end
