@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams;
@property (retain, nonatomic) NSMutableArray *searchLandingAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;
+ (Class)searchLandingAdsSettingsParamsType;

- (unsigned long long)hash;
- (void)clearSearchAdsSettingsParams;
- (BOOL)readFrom:(id)a0;
- (void)clearSearchLandingAdsSettingsParams;
- (void)writeTo:(id)a0;
- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)searchAdsSettingsParamsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addSearchAdsSettingsParams:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
