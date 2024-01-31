@class NSString, NSMutableArray;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {
    struct { unsigned char channelContentProviderID : 1; unsigned char draftArticle : 1; unsigned char paidArticle : 1; unsigned char sponsoredArticle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) BOOL hasPaidArticle;
@property (nonatomic) BOOL paidArticle;
@property (nonatomic) BOOL hasSponsoredArticle;
@property (nonatomic) BOOL sponsoredArticle;
@property (nonatomic) BOOL hasDraftArticle;
@property (nonatomic) BOOL draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) BOOL hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

+ (Class)channelIAdKeywordsType;
+ (Class)articleIAdKeywordsType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdCategoriesType;
+ (Class)articleIAdCategoriesType;

- (void)addChannelIAdKeywords:(id)a0;
- (unsigned long long)hash;
- (void)clearChannelIAdCategories;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)a0;
- (void)clearArticleIAdSectionIDs;
- (BOOL)readFrom:(id)a0;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)articleIAdCategoriesCount;
- (id)description;
- (void)clearChannelIAdKeywords;
- (unsigned long long)channelIAdKeywordsCount;
- (unsigned long long)articleIAdKeywordsCount;
- (unsigned long long)channelIAdCategoriesCount;
- (void).cxx_destruct;
- (void)addArticleIAdCategories:(id)a0;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)a0;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)a0;
- (void)addArticleIAdKeywords:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearArticleIAdKeywords;
- (void)clearArticleIAdCategories;
- (void)mergeFrom:(id)a0;
- (void)addArticleIAdSectionIDs:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addChannelIAdCategories:(id)a0;
- (unsigned long long)articleIAdSectionIDsCount;

@end
