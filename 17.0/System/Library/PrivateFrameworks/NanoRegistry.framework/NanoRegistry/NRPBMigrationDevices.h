@class NSData, NSMutableArray;

@interface NRPBMigrationDevices : PBCodable <NSCopying> {
    NSMutableArray *_devices;
    NSData *_phoneUDIDHash;
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
