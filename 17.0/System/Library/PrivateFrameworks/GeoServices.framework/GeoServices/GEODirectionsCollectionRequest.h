@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementsType;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addRequestElements:(id)a0;
- (void)clearRequestElements;
- (id)requestElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
