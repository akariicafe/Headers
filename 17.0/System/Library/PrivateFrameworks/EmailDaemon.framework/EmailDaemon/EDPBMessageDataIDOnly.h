@interface EDPBMessageDataIDOnly : PBCodable <NSCopying> {
    struct { unsigned char messageId : 1; } _has;
}

@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) long long messageId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
