@class NSURL, WLKLocale, NSDate, NSDictionary, WLKComingSoonInfo, WLKStoreOffer, WLKPlayEvent, WLKChannelDetails, WLKOfferListing, NSString, WLKBasicContentMetadata, NSArray, NSNumber;

@interface WLKPlayable : NSObject

@property (readonly, copy, nonatomic) NSString *playableID;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) WLKChannelDetails *channelDetails;
@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) long long contentSourceType;
@property (readonly, nonatomic, getter=isEntitled) BOOL entitled;
@property (readonly, nonatomic, getter=isEntitledAnywhere) BOOL entitledAnywhere;
@property (readonly, nonatomic, getter=isAppInstalled) BOOL appInstalled;
@property (readonly, nonatomic, getter=isiTunes) BOOL itunes;
@property (readonly, nonatomic) long long airingType;
@property (readonly, nonatomic) WLKBasicContentMetadata *content;
@property (readonly, copy, nonatomic) NSArray *adLocales;
@property (readonly, copy, nonatomic) NSArray *audioTrackLocales;
@property (readonly, copy, nonatomic) NSArray *audioTrackFormats;
@property (readonly, copy, nonatomic) NSArray *closedCaptionLocales;
@property (readonly, copy, nonatomic) NSArray *SDHLocales;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) WLKLocale *primaryLocale;
@property (readonly, copy, nonatomic) NSString *externalID;
@property (readonly, copy, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic, getter=isSubtitled) BOOL subtitled;
@property (readonly, copy, nonatomic) NSArray *subtitledLocales;
@property (readonly, copy, nonatomic) NSString *videoQuality;
@property (readonly, copy, nonatomic) NSString *videoColorRange;
@property (readonly, copy, nonatomic) NSDate *endAirTime;
@property (readonly, copy, nonatomic) NSDate *startAirTime;
@property (readonly, nonatomic) WLKPlayEvent *playEvent;
@property (readonly, copy, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, copy, nonatomic) NSDictionary *punchoutUrls;
@property (readonly, copy, nonatomic) WLKComingSoonInfo *comingSoonInfo;
@property (readonly, copy, nonatomic) NSArray *movieClips;
@property (readonly, copy, nonatomic) NSArray *storeOffers;
@property (readonly, copy, nonatomic) NSArray *subscriptionOffers;
@property (readonly, copy, nonatomic) WLKOfferListing *offerListing;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRentalOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreBuyOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreSubscriptionOffer;

+ (id)playablesWithDictionaries:(id)a0 context:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (id)openPunchoutURL;
- (id)playPunchoutURL;
- (id)_localesArrayForDictionary:(id)a0 andKey:(id)a1;

@end
