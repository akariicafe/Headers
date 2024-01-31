@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying> {
    struct { unsigned char w : 1; unsigned char x : 1; unsigned char y : 1; unsigned char z : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasData;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL hasX;
@property (nonatomic) float x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) float y;
@property (nonatomic) BOOL hasZ;
@property (nonatomic) float z;
@property (nonatomic) BOOL hasW;
@property (nonatomic) float w;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
