@class NSString, BLTPBImage;

@interface BLTPBAppearance : PBCodable <NSCopying> {
    struct { unsigned char destructive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) BLTPBImage *image;
@property (nonatomic) BOOL hasDestructive;
@property (nonatomic) BOOL destructive;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
