@class NSMutableArray;

@interface CPLRampingRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addRequest:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requestAtIndex:(unsigned long long)a0;
- (void)clearRequests;
- (unsigned long long)requestsCount;

@end
