@class NSData;

@interface ChannelActivityUpdate : PBCodable <NSCopying> {
    struct { unsigned char currentVersion : 1; unsigned char prevVersion : 1; } _has;
}

@property (nonatomic) BOOL hasCurrentVersion;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) BOOL hasPrevVersion;
@property (nonatomic) unsigned long long prevVersion;
@property (readonly, nonatomic) BOOL hasEncryptedUpdatePayload;
@property (retain, nonatomic) NSData *encryptedUpdatePayload;

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
