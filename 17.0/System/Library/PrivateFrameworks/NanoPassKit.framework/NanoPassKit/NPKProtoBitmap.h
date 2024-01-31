@class NSData;

@interface NPKProtoBitmap : PBCodable <NSCopying>

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long bitsPerComponent;
@property (nonatomic) unsigned long long bitsPerPixel;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned int bitmapInfo;
@property (retain, nonatomic) NSData *bitmapData;

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
