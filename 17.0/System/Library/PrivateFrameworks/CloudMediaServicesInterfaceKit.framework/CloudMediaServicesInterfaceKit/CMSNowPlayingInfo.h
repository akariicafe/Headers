@class NSString;

@interface CMSNowPlayingInfo : NSObject <CMSCoding, NSCopying>

@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *composerName;
@property (copy, nonatomic) NSString *externalContentIdentifier;
@property (copy, nonatomic) NSString *collectionIdentifier;
@property (copy, nonatomic) NSString *externalUserProfileIdentifier;
@property (copy, nonatomic) NSString *artworkURLString;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic) unsigned long long trackNumber;
@property (nonatomic) unsigned long long discNumber;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) float playbackRate;
@property (nonatomic) float defaultPlaybackRate;
@property (nonatomic) unsigned long long queueIndex;
@property (nonatomic) BOOL isAdvertisement;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) NSString *requesterSharedUserID;
@property (copy, nonatomic) NSString *userAccountHomeUserID;
@property (copy, nonatomic) NSString *endpointID;
@property (copy, nonatomic) NSString *applicationBundleID;
@property (copy, nonatomic) NSString *userActivityPersistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceFromCMSCoded:(id)a0;
+ (id)nowPlayingInfoFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cmsCoded;

@end
