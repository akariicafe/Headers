@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { unsigned char maxArticlesShown : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)personalizedArticlesType;
+ (Class)mandatoryArticlesType;

- (void)addMandatoryArticles:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)clearPersonalizedArticles;
- (void)addPersonalizedArticles:(id)a0;
- (id)personalizedArticlesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)mandatoryArticlesCount;
- (id)description;
- (void)clearMandatoryArticles;
- (id)mandatoryArticlesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)personalizedArticlesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
