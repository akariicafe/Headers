@class NSString, HDCodableSyncIdentity;

@interface HDCloudSyncCodableDeviceContext : PBCodable <NSCopying> {
    struct { unsigned char modificationDate : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (readonly, nonatomic) BOOL hasCurrentOSName;
@property (retain, nonatomic) NSString *currentOSName;
@property (readonly, nonatomic) BOOL hasCurrentOSVersion;
@property (retain, nonatomic) NSString *currentOSVersion;
@property (readonly, nonatomic) BOOL hasProductTypeName;
@property (retain, nonatomic) NSString *productTypeName;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;

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
