@class NGMPBP256Key, NSData;

@interface NGMPBDevicePreKey : PBCodable <NSCopying> {
    struct { unsigned char secondaryVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDhKey;
@property (retain, nonatomic) NGMPBP256Key *dhKey;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *prekeySignature;
@property (readonly, nonatomic) BOOL hasSecondaryPrivateKey;
@property (retain, nonatomic) NSData *secondaryPrivateKey;
@property (readonly, nonatomic) BOOL hasSecondaryRegistrationData;
@property (retain, nonatomic) NSData *secondaryRegistrationData;
@property (nonatomic) BOOL hasSecondaryVersion;
@property (nonatomic) unsigned int secondaryVersion;

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
