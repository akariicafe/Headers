@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying> {
    struct { unsigned char cfAbsoluteTimeS : 1; unsigned char machAbsoluteTimeS : 1; unsigned char machContinuousTimeS : 1; } _has;
}

@property (nonatomic) BOOL hasCfAbsoluteTimeS;
@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) BOOL hasMachAbsoluteTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) BOOL hasMachContinuousTimeS;
@property (nonatomic) double machContinuousTimeS;

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
