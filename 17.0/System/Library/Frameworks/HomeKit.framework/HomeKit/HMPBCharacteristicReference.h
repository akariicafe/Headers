@class HMPBServiceReference, NSData;

@interface HMPBCharacteristicReference : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceReference;
@property (retain, nonatomic) HMPBServiceReference *serviceReference;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) NSData *uniqueIdentifier;

+ (id)characteristicReferenceWithCharacteristic:(id)a0;
+ (id)characteristicReferenceWithData:(id)a0;

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
