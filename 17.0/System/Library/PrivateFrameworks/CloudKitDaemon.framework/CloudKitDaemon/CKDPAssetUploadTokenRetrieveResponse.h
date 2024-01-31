@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (id)uploadTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)addUploadTokens:(id)a0;
- (unsigned long long)uploadTokensCount;
- (BOOL)readFrom:(id)a0;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)contentResponseHeadersCount;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addContentResponseHeaders:(id)a0;
- (void)clearContentResponseHeaders;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearUploadTokens;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
