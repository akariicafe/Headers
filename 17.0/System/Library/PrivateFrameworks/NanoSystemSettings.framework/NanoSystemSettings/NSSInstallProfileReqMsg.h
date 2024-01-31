@class NSData;

@interface NSSInstallProfileReqMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProfileData;
@property (retain, nonatomic) NSData *profileData;

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
