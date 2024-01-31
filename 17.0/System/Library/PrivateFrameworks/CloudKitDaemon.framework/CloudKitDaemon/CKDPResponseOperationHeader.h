@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

- (id)throttleConfigAtIndex:(unsigned long long)a0;
- (void)clearThrottleConfigs;
- (unsigned long long)hash;
- (unsigned long long)assetAuthorizationResponsesCount;
- (BOOL)readFrom:(id)a0;
- (void)clearAssetAuthorizationResponses;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addThrottleConfig:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)throttleConfigsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAssetAuthorizationResponses:(id)a0;

@end
