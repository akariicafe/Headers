@interface AWDMailError : PBCodable <NSCopying> {
    struct { unsigned char genericErrorCode : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasGenericErrorCode;
@property (nonatomic) long long genericErrorCode;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsErrorCode:(id)a0;
- (id)errorCodeAsString:(int)a0;

@end
