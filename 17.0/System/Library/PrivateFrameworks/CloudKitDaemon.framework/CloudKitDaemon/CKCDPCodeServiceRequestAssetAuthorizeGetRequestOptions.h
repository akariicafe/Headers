@class NSMutableArray;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {
    struct { unsigned char contentRequestAuthorizeGetOptions : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) BOOL hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addContentRequestHeaders:(id)a0;
- (void)writeTo:(id)a0;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)contentRequestHeadersCount;
- (void).cxx_destruct;
- (void)clearContentRequestHeaders;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
