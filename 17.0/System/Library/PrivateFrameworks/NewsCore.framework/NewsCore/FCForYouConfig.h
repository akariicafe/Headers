@class NSDate, NSString, NSArray, FCInterestToken, FCTopStoriesGroupConfig, NTPBForYouConfigRecord, FCSpotlightGroupConfig, FCGroupConfig;

@interface FCForYouConfig : NSObject <NSCopying>

@property (retain, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (retain, nonatomic) FCTopStoriesGroupConfig *topStoriesGroupConfig;
@property (retain, nonatomic) FCGroupConfig *trendingGroupConfig;
@property (retain, nonatomic) FCSpotlightGroupConfig *spotlightGroupConfig;
@property (retain, nonatomic) NSArray *editorialGroupConfigs;
@property (readonly, nonatomic) NSArray *demoGroupConfigs;
@property (readonly, nonatomic) NSArray *todayFeedTopStoriesArticleIDs;
@property (readonly, nonatomic) NSString *trendingArticleListID;
@property (readonly, nonatomic) NSArray *editorialArticleListIDs;
@property (readonly, nonatomic) NSArray *editorialSectionTagIDs;
@property (readonly, nonatomic) NSDate *fetchedDate;
@property (readonly, nonatomic) NSArray *topVideosArticleIDs;
@property (readonly, nonatomic) NSString *moreVideosArticleListID;
@property (readonly, nonatomic) NSString *spotlightArticleID;

- (id)initWithRecord:(id)a0 interestToken:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
