@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackComponent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_values;
    int _status;
    int _type;
    struct { unsigned char has_status : 1; unsigned char has_type : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)valueType;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (void)addValue:(id)a0;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (unsigned long long)valuesCount;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)clearValues;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
