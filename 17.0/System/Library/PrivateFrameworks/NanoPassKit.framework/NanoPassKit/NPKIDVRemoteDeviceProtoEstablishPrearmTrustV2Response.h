@class NSData;

@interface NPKIDVRemoteDeviceProtoEstablishPrearmTrustV2Response : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (readonly, nonatomic) BOOL hasAttestationData;
@property (retain, nonatomic) NSData *attestationData;

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
