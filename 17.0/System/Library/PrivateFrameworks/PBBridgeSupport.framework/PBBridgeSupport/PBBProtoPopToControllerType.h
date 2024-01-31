@interface PBBProtoPopToControllerType : PBCodable <NSCopying> {
    struct { unsigned char intendedFireDate : 1; } _has;
}

@property (nonatomic) unsigned int controllerType;
@property (nonatomic) BOOL hasIntendedFireDate;
@property (nonatomic) double intendedFireDate;

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
