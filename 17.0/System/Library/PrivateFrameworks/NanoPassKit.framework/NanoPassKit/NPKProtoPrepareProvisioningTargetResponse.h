@class NSData;

@interface NPKProtoPrepareProvisioningTargetResponse : PBCodable <NSCopying> {
    struct { unsigned char wasFamilyCircle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasEncryptedTargetData;
@property (retain, nonatomic) NSData *encryptedTargetData;
@property (nonatomic) BOOL hasWasFamilyCircle;
@property (nonatomic) BOOL wasFamilyCircle;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
