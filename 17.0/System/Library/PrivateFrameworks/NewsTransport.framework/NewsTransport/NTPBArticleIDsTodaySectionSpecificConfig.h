@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *articles;

+ (Class)articlesType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)articlesCount;
- (void)writeTo:(id)a0;
- (void)addArticles:(id)a0;
- (id)description;
- (id)articlesAtIndex:(unsigned long long)a0;
- (void)clearArticles;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
