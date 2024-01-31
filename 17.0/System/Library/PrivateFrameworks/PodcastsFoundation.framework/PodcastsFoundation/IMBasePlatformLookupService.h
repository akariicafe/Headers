@class NSString;

@interface IMBasePlatformLookupService : IMBaseStoreService

@property (retain, nonatomic) NSString *protocolVersion;

- (id)urlRequest;
- (id)init;
- (void)performRequest:(id /* block */)a0;
- (id)baseUrl;
- (void).cxx_destruct;
- (id)platformAction;

@end
