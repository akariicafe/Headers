@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {
    NSMutableArray *_problemStatus;
    int _statusCode;
    struct { unsigned char has_statusCode : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSMutableArray *problemStatus;

+ (BOOL)isValid:(id)a0;
+ (Class)problemStatusType;

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
- (int)StringAsStatusCode:(id)a0;
- (void)addProblemStatus:(id)a0;
- (void)clearProblemStatus;
- (id)problemStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)problemStatusCount;
- (id)statusCodeAsString:(int)a0;

@end
