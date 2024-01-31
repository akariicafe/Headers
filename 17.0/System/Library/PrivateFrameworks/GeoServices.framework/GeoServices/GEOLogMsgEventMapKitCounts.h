@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {
    NSMutableArray *_mapKitCounts;
}

@property (retain, nonatomic) NSMutableArray *mapKitCounts;

+ (BOOL)isValid:(id)a0;
+ (Class)mapKitCountsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addMapKitCounts:(id)a0;
- (void)clearMapKitCounts;
- (id)mapKitCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)mapKitCountsCount;

@end
