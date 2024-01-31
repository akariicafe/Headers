@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    struct { unsigned char screenSizeHeight : 1; unsigned char screenSizeWidth : 1; unsigned char absolute : 1; unsigned char integratedDisplay : 1; } _has;
}

@property (nonatomic) BOOL hasAbsolute;
@property (nonatomic) BOOL absolute;
@property (nonatomic) BOOL hasIntegratedDisplay;
@property (nonatomic) BOOL integratedDisplay;
@property (nonatomic) BOOL hasScreenSizeWidth;
@property (nonatomic) float screenSizeWidth;
@property (nonatomic) BOOL hasScreenSizeHeight;
@property (nonatomic) float screenSizeHeight;

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
