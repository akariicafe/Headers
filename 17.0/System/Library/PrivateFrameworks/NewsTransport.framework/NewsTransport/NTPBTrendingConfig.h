@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFallbackLanguageTag;
@property (retain, nonatomic) NSString *fallbackLanguageTag;
@property (retain, nonatomic) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addLanguageConfigs:(id)a0;
- (void)clearLanguageConfigs;
- (id)languageConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageConfigsCount;

@end
