@interface Filter : PBCodable <NSCopying> {
    struct { unsigned char port : 1; unsigned char protocol : 1; } _has;
}

@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) unsigned int protocol;
@property (nonatomic) BOOL hasPort;
@property (nonatomic) unsigned int port;

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
