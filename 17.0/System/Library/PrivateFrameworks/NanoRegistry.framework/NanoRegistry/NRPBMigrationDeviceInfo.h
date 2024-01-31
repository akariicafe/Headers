@class NSString, NSData;

@interface NRPBMigrationDeviceInfo : PBCodable <NSCopying> {
    NSString *_advertisedName;
    NSData *_iD;
    NSString *_name;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
