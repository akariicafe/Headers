@class NSData;

@interface NGMPBPublicDevicePrekey : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *prekey;
@property (retain, nonatomic) NSData *prekeySignature;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasSecondaryPrekey;
@property (retain, nonatomic) NSData *secondaryPrekey;

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
