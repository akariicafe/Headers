@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    NSString *_problemId;
    int _statusCode;
    BOOL _isNotificationSupported;
    struct { unsigned char has_statusCode : 1; unsigned char has_isNotificationSupported : 1; } _flags;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (retain, nonatomic) NSString *problemId;
@property (nonatomic) BOOL hasIsNotificationSupported;
@property (nonatomic) BOOL isNotificationSupported;

+ (BOOL)isValid:(id)a0;

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
- (int)StringAsStatusCode:(id)a0;
- (id)statusCodeAsString:(int)a0;

@end
