@class FCCKPResponseOperationResultError;

@interface FCCKPResponseOperationResult : PBCodable <NSCopying> {
    int _code;
    FCCKPResponseOperationResultError *_error;
    struct { unsigned char code : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
