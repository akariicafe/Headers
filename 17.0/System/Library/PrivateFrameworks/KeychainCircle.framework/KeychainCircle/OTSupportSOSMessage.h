@interface OTSupportSOSMessage : PBCodable <NSCopying> {
    struct { unsigned char supported : 1; } _has;
}

@property (nonatomic) BOOL hasSupported;
@property (nonatomic) int supported;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSupported:(id)a0;
- (id)supportedAsString:(int)a0;

@end
