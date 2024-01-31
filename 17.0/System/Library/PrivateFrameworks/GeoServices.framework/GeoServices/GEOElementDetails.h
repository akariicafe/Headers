@interface GEOElementDetails : PBCodable <NSCopying> {
    unsigned long long _businessId;
    unsigned int _elementIndex;
    int _elementType;
    unsigned int _localSearchProviderId;
    BOOL _isEnrichedResult;
    struct { unsigned char has_businessId : 1; unsigned char has_elementIndex : 1; unsigned char has_elementType : 1; unsigned char has_localSearchProviderId : 1; unsigned char has_isEnrichedResult : 1; } _flags;
}

@property (nonatomic) BOOL hasElementType;
@property (nonatomic) int elementType;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) unsigned long long businessId;
@property (nonatomic) BOOL hasLocalSearchProviderId;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) BOOL hasElementIndex;
@property (nonatomic) unsigned int elementIndex;
@property (nonatomic) BOOL hasIsEnrichedResult;
@property (nonatomic) BOOL isEnrichedResult;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsElementType:(id)a0;
- (id)elementTypeAsString:(int)a0;

@end
