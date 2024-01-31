@interface _ICLLClientInfoAction : PBCodable <NSCopying> {
    long long _participantId;
    int _code;
    struct { unsigned char participantId : 1; unsigned char code : 1; } _has;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
