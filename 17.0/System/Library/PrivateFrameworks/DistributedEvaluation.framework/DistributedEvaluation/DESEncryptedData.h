@class NSData, NSString;

@interface DESEncryptedData : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasEncryptedKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) BOOL hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;

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
