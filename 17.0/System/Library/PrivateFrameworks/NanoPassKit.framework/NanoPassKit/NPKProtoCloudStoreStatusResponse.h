@class NSData;

@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying> {
    struct { unsigned char cloudStoreIsSetup : 1; unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasAccountInfoData;
@property (retain, nonatomic) NSData *accountInfoData;
@property (nonatomic) BOOL hasCloudStoreIsSetup;
@property (nonatomic) BOOL cloudStoreIsSetup;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

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
