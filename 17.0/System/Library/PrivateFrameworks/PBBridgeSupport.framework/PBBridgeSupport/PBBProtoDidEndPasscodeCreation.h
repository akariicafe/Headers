@interface PBBProtoDidEndPasscodeCreation : PBCodable <NSCopying> {
    struct { unsigned char isLong : 1; } _has;
}

@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasIsLong;
@property (nonatomic) BOOL isLong;

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
