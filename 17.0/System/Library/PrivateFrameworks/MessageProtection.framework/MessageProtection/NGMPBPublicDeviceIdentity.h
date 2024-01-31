@class NSData;

@interface NGMPBPublicDeviceIdentity : PBCodable <NSCopying> {
    struct { unsigned char secondaryVersion : 1; } _has;
}

@property (retain, nonatomic) NSData *signingKey;
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
