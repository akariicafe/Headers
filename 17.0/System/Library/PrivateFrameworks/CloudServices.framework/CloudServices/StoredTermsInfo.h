@class SecureBackupTermsInfo;

@interface StoredTermsInfo : PBCodable <NSCopying> {
    struct { unsigned char storageVersion : 1; } _has;
}

@property (nonatomic) BOOL hasStorageVersion;
@property (nonatomic) unsigned long long storageVersion;
@property (readonly, nonatomic) BOOL hasTermsInfo;
@property (retain, nonatomic) SecureBackupTermsInfo *termsInfo;

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
