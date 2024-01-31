@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

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
- (void)addColumns:(id)a0;
- (unsigned long long)columnsCount;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)clearColumns;

@end
