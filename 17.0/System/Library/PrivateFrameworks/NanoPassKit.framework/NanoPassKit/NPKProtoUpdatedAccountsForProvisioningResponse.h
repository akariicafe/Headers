@class NSData;

@interface NPKProtoUpdatedAccountsForProvisioningResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasAccountsRequiringProvisioningData;
@property (retain, nonatomic) NSData *accountsRequiringProvisioningData;
@property (readonly, nonatomic) BOOL hasAccountsOnDeviceData;
@property (retain, nonatomic) NSData *accountsOnDeviceData;

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
