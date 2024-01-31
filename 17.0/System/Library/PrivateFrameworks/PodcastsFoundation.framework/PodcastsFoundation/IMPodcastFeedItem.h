@class NSString, NSDate;

@interface IMPodcastFeedItem : NSObject <MTFeedEpisode>

@property (nonatomic) BOOL preferredCategoryFound;
@property (retain, nonatomic) NSString *author;
@property (nonatomic) unsigned long long byteSize;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *enclosureParameterString;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *itemDescriptionSourceElement;
@property (retain, nonatomic) NSDate *pubDate;
@property (retain, nonatomic) NSDate *firstTimeAvailableAsPaid;
@property (retain, nonatomic) NSDate *firstTimeAvailableAsFree;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int trackNum;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *itunesTitle;
@property (retain, nonatomic) NSString *itemSummary;
@property (retain, nonatomic) NSString *itemSummarySourceElement;
@property (nonatomic) long long seasonNumber;
@property (nonatomic) long long episodeNumber;
@property (retain, nonatomic) NSString *episodeType;
@property (retain, nonatomic) NSString *webpageURL;
@property (retain, nonatomic) NSString *episodeStoreId;
@property (retain, nonatomic) NSString *priceType;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSString *enclosureURL;
@property (retain, nonatomic) NSString *entitledPriceType;
@property (nonatomic) double entitledDuration;
@property (retain, nonatomic) NSString *entitledEnclosureURL;
@property (retain, nonatomic) NSString *artworkTemplateURL;
@property (nonatomic) double artworkWidth;
@property (nonatomic) double artworkHeight;
@property (retain, nonatomic) NSString *artworkBackgroundColor;
@property (retain, nonatomic) NSString *artworkTextPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextSecondaryColor;
@property (retain, nonatomic) NSString *artworkTextTertiaryColor;
@property (retain, nonatomic) NSString *artworkTextQuaternaryColor;
@property (readonly, nonatomic) NSString *resolvedEnclosureUrl;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
