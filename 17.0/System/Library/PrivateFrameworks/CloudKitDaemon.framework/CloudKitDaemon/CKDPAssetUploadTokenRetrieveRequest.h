@class CKDPRecordType, CKDPRecordFieldIdentifier, NSMutableArray, NSData;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char options : 1; unsigned char authPutType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *uploads;
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic) BOOL hasAuthPutType;
@property (nonatomic) int authPutType;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) unsigned long long options;

+ (id)options;
+ (Class)contentRequestHeadersType;
+ (Class)uploadsType;
+ (Class)assetsType;

- (unsigned long long)assetsCount;
- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)clearAssets;
- (void)addContentRequestHeaders:(id)a0;
- (void)addUploads:(id)a0;
- (void)writeTo:(id)a0;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (int)StringAsAuthPutType:(id)a0;
- (id)description;
- (unsigned long long)contentRequestHeadersCount;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addAssets:(id)a0;
- (void)clearContentRequestHeaders;
- (id)authPutTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)uploadsCount;
- (BOOL)isEqual:(id)a0;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUploads;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
