@class NSString, NSMutableArray;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSMutableArray *trendingTopics;

+ (Class)trendingTopicsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTrendingTopics:(id)a0;
- (void)clearTrendingTopics;
- (id)trendingTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)trendingTopicsCount;

@end
