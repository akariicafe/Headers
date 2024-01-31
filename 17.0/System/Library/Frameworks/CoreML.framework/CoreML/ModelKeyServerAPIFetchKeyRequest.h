@class NSString, NSData;

@interface ModelKeyServerAPIFetchKeyRequest : PBRequest <NSCopying> {
    struct { unsigned char rawRequest : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) BOOL hasSignedKeyRequest;
@property (retain, nonatomic) NSData *signedKeyRequest;
@property (nonatomic) BOOL hasRawRequest;
@property (nonatomic) BOOL rawRequest;

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
