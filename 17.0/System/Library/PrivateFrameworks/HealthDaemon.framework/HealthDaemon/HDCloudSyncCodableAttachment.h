@class NSString, NSData;

@interface HDCloudSyncCodableAttachment : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char fileSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) long long fileSize;
@property (readonly, nonatomic) BOOL hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) BOOL hasFileHash;
@property (retain, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;
@property (readonly, nonatomic) BOOL hasAssetData;
@property (retain, nonatomic) NSData *assetData;
@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (readonly, nonatomic) BOOL hasSystemBuildVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;

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
