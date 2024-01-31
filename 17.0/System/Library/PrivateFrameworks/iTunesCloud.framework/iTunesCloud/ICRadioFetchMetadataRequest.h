@class NSArray, ICStoreRequestContext, NSData;

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *storeAdamIDs;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (copy, nonatomic) NSData *timedMetadataData;
@property (nonatomic) long long qualityOfService;

- (id)init;
- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
