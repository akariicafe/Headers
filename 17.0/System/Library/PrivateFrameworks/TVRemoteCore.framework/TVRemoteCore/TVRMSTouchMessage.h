@interface TVRMSTouchMessage : PBCodable <NSCopying> {
    struct { unsigned char direction : 1; unsigned char repeatCount : 1; unsigned char sessionIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasRepeatCount;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

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
