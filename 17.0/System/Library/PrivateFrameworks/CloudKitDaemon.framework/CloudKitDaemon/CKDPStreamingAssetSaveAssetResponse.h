@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {
    struct { unsigned char reservedSize : 1; unsigned char uploadURLExpirationTimeSeconds : 1; } _has;
}

@property (nonatomic) BOOL hasReservedSize;
@property (nonatomic) long long reservedSize;
@property (readonly, nonatomic) BOOL hasUploadURL;
@property (retain, nonatomic) NSString *uploadURL;
@property (nonatomic) BOOL hasUploadURLExpirationTimeSeconds;
@property (nonatomic) long long uploadURLExpirationTimeSeconds;

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
