@interface TVRMSResponseCodeMessage : PBCodable <NSCopying> {
    struct { unsigned char responseCode : 1; } _has;
}

@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) int responseCode;

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
