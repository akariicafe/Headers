@class NSString, NSData, NSMutableArray;

@interface NTPBEndOfArticleExposure : PBCodable <NSCopying> {
    struct { unsigned char backendArticleVersionInt64 : 1; unsigned char personalizationTreatmentId : 1; unsigned char publisherArticleVersionInt64 : 1; unsigned char articleType : 1; unsigned char backendArticleVersion : 1; unsigned char characterCount : 1; unsigned char publisherArticleVersion : 1; unsigned char isUserSubscribedToFeed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (nonatomic) BOOL hasIsUserSubscribedToFeed;
@property (nonatomic) BOOL isUserSubscribedToFeed;
@property (retain, nonatomic) NSMutableArray *recommendedArticleIds;
@property (retain, nonatomic) NSMutableArray *referencedRecommendedArticleIds;
@property (nonatomic) BOOL hasArticleType;
@property (nonatomic) int articleType;
@property (nonatomic) BOOL hasCharacterCount;
@property (nonatomic) int characterCount;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *namedEntities;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (nonatomic) int backendArticleVersion;
@property (readonly, nonatomic) BOOL hasSurfacedByChannelId;
@property (retain, nonatomic) NSString *surfacedByChannelId;
@property (readonly, nonatomic) BOOL hasSurfacedBySectionId;
@property (retain, nonatomic) NSString *surfacedBySectionId;
@property (readonly, nonatomic) BOOL hasSurfacedByTopicId;
@property (retain, nonatomic) NSString *surfacedByTopicId;
@property (readonly, nonatomic) BOOL hasSectionHeadlineId;
@property (retain, nonatomic) NSString *sectionHeadlineId;
@property (nonatomic) BOOL hasPersonalizationTreatmentId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) BOOL hasPublisherArticleVersionInt64;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic) BOOL hasBackendArticleVersionInt64;
@property (nonatomic) long long backendArticleVersionInt64;

+ (Class)namedEntitiesType;
+ (Class)recommendedArticleIdType;
+ (Class)referencedRecommendedArticleIdsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addNamedEntities:(id)a0;
- (void)clearNamedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)namedEntitiesCount;
- (int)StringAsArticleType:(id)a0;
- (void)addRecommendedArticleId:(id)a0;
- (void)addReferencedRecommendedArticleIds:(id)a0;
- (id)articleTypeAsString:(int)a0;
- (void)clearRecommendedArticleIds;
- (void)clearReferencedRecommendedArticleIds;
- (id)recommendedArticleIdAtIndex:(unsigned long long)a0;
- (unsigned long long)recommendedArticleIdsCount;
- (id)referencedRecommendedArticleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)referencedRecommendedArticleIdsCount;

@end
