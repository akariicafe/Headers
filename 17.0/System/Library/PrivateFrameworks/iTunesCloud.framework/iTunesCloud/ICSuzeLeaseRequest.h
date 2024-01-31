@class NSData, NSString, ICStoreRequestContext;

@interface ICSuzeLeaseRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSData *clientData;
@property (readonly, copy, nonatomic) NSString *leaseID;
@property (readonly, nonatomic) long long mediaType;
@property (nonatomic) long long qualityOfService;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, nonatomic) long long requestType;

- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestContext:(id)a0 requestType:(long long)a1 leaseID:(id)a2 mediaType:(long long)a3 clientData:(id)a4;

@end
