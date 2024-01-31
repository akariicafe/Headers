@class NSData;

@interface NPKProtoPrepareProvisioningTargetRequest : PBRequest <NSCopying> {
    struct { unsigned char checkFamilyCircle : 1; } _has;
}

@property (retain, nonatomic) NSData *targetData;
@property (nonatomic) BOOL hasCheckFamilyCircle;
@property (nonatomic) BOOL checkFamilyCircle;

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
