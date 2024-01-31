@class NSData;

@interface NPKProtoServiceProviderDataForPassWithUniqueIdentifierResponse : PBCodable <NSCopying> {
    struct { unsigned char encrypted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasServiceProviderData;
@property (retain, nonatomic) NSData *serviceProviderData;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) BOOL hasEncrypted;
@property (nonatomic) BOOL encrypted;

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
