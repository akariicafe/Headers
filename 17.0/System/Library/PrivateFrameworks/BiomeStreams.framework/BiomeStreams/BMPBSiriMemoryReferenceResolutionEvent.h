@class NSString, NSMutableArray;

@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *entityMapElements;

+ (Class)entityMapElementsType;

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
- (void)addEntityMapElements:(id)a0;
- (void)clearEntityMapElements;
- (id)entityMapElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)entityMapElementsCount;

@end
