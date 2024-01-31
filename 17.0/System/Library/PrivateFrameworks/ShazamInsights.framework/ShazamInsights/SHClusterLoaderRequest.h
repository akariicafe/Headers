@class SHStorefront, NSURL;

@interface SHClusterLoaderRequest : NSObject

@property (readonly, nonatomic) SHStorefront *storefront;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *outputURL;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL shouldDeleteExistingDatabaseAtOutputURL;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)URLForRequestForStorefront:(id)a0 withCompletion:(id /* block */)a1;
- (void)clusterConfiguration:(id /* block */)a0;
- (id)initWithType:(long long)a0 sourceURL:(id)a1 outputURL:(id)a2;
- (void)sourceURLWithCompletion:(id /* block */)a0;

@end
