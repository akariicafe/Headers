@interface BMPBGameControllerEvent : PBCodable <NSCopying> {
    struct { unsigned char numberOfControllersConnected : 1; unsigned char isControllerConnected : 1; } _has;
}

@property (nonatomic) BOOL hasIsControllerConnected;
@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) BOOL hasNumberOfControllersConnected;
@property (nonatomic) int numberOfControllersConnected;

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
