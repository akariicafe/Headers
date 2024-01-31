@interface GEOLogMsgEventId : PBCodable <NSCopying> {
    unsigned long long _high;
    unsigned long long _low;
    unsigned int _deanonymizeId;
    struct { unsigned char has_high : 1; unsigned char has_low : 1; unsigned char has_deanonymizeId : 1; } _flags;
}

@property (nonatomic) BOOL hasHigh;
@property (nonatomic) unsigned long long high;
@property (nonatomic) BOOL hasLow;
@property (nonatomic) unsigned long long low;
@property (nonatomic) BOOL hasDeanonymizeId;
@property (nonatomic) unsigned int deanonymizeId;

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

@end
