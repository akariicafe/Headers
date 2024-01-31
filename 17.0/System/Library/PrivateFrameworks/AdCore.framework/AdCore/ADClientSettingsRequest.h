@class NSString, NSMutableArray;

@interface ADClientSettingsRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasIAdIDString;
@property (retain, nonatomic) NSString *iAdIDString;
@property (retain, nonatomic) NSMutableArray *currentSettingParams;
@property (retain, nonatomic) NSMutableArray *currentSearchLandingAdsSettingParams;

+ (id)options;
+ (Class)currentSearchLandingAdsSettingParamsType;
+ (Class)currentSettingParamsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCurrentSearchLandingAdsSettingParams:(id)a0;
- (void)addCurrentSettingParams:(id)a0;
- (void)clearCurrentSearchLandingAdsSettingParams;
- (void)clearCurrentSettingParams;
- (id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentSearchLandingAdsSettingParamsCount;
- (id)currentSettingParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentSettingParamsCount;

@end
