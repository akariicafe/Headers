@interface IMSharedUtilitiesProtoCloudKitEncryptedChatP1 : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char isRecovered : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasIsRecovered;
@property (nonatomic) BOOL isRecovered;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
