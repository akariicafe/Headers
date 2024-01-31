@class NSData;

@interface PKProtobufPaymentContentItem : PBCodable <NSCopying> {
    struct { unsigned char centered : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasImageRequest;
@property (retain, nonatomic) NSData *imageRequest;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *title;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSData *label;
@property (nonatomic) BOOL hasCentered;
@property (nonatomic) BOOL centered;

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
