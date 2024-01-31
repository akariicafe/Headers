@interface _MRGameControllerDigitizerProtobuf : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char x : 1; unsigned char y : 1; unsigned char touchDown : 1; } _has;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (nonatomic) BOOL hasTouchDown;
@property (nonatomic) BOOL touchDown;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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
