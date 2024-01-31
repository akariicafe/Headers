@class NSString;

@interface GEOVLFInitializationFailureDetails : PBCodable <NSCopying> {
    NSString *_arkitUnderlyingErrorDomain;
    int _arkitErrorCode;
    int _arkitUnderlyingErrorCode;
    struct { unsigned char has_arkitErrorCode : 1; unsigned char has_arkitUnderlyingErrorCode : 1; } _flags;
}

@property (nonatomic) BOOL hasArkitErrorCode;
@property (nonatomic) int arkitErrorCode;
@property (nonatomic) BOOL hasArkitUnderlyingErrorCode;
@property (nonatomic) int arkitUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasArkitUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *arkitUnderlyingErrorDomain;

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

@end
