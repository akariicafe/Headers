@class DRSProtoClientDeviceMetadata, NSString;

@interface DRSProtoTaskingDeviceMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDeviceMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *deviceMetadata;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;

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
