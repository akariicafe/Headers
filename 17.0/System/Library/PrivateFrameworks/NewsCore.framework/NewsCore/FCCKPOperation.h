@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying> {
    NSString *_operationUUID;
    int _type;
    BOOL _last;
    BOOL _synchronousMode;
    struct { unsigned char type : 1; unsigned char last : 1; unsigned char synchronousMode : 1; } _has;
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
