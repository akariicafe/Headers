@class NSString, NSMutableArray;

@interface ATXPBSpotlightSuggestionLayout : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _scores;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *collections;
@property (readonly, nonatomic) unsigned long long scoresCount;
@property (readonly, nonatomic) double *scores;

+ (Class)collectionsType;

- (void)addScores:(double)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)addCollections:(id)a0;
- (void)writeTo:(id)a0;
- (void)setScores:(double *)a0 count:(unsigned long long)a1;
- (unsigned long long)collectionsCount;
- (id)description;
- (void)clearScores;
- (void).cxx_destruct;
- (void)clearCollections;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)scoresAtIndex:(unsigned long long)a0;

@end
