@interface CLPLocationProcessingMetadata : PBCodable <NSCopying> {
    struct { unsigned char tripSourceType : 1; } _has;
}

@property (nonatomic) BOOL hasTripSourceType;
@property (nonatomic) int tripSourceType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTripSourceType:(id)a0;
- (id)tripSourceTypeAsString:(int)a0;

@end
