@class NSString, NSData, HDCodableSyncIdentity;

@interface HDCodableDevice : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasHardwareVersion;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) BOOL hasLocalIdentifier;
@property (retain, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) BOOL hasFDAUDI;
@property (retain, nonatomic) NSString *fDAUDI;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
