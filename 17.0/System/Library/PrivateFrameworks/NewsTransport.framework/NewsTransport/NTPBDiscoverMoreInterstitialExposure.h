@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying> {
    struct { unsigned char nextArticleAffordanceType : 1; unsigned char userAction : 1; unsigned char withNextArticleAffordance : 1; } _has;
}

@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasWithNextArticleAffordance;
@property (nonatomic) BOOL withNextArticleAffordance;
@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (nonatomic) int nextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasTappedNextArticleAffordanceFeedId;
@property (retain, nonatomic) NSString *tappedNextArticleAffordanceFeedId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsNextArticleAffordanceType:(id)a0;
- (id)nextArticleAffordanceTypeAsString:(int)a0;

@end
