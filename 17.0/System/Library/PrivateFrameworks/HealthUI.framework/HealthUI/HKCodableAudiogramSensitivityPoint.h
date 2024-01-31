@class HKCodableQuantity;

@interface HKCodableAudiogramSensitivityPoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrequency;
@property (retain, nonatomic) HKCodableQuantity *frequency;
@property (readonly, nonatomic) BOOL hasLeftEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *leftEarSensitivity;
@property (readonly, nonatomic) BOOL hasRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *rightEarSensitivity;

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
