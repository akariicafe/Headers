@class GEOWiFiESS;

@interface GEOWiFiESSMatch : PBCodable <NSCopying> {
    GEOWiFiESS *_ess;
    int _status;
    struct { unsigned char has_status : 1; } _flags;
}

@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasEss;
@property (retain, nonatomic) GEOWiFiESS *ess;

+ (BOOL)isValid:(id)a0;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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

@end
