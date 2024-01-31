@class NSString;

@interface SSVCloudServiceAPITokenRequest : SSRequest <SSXPCCoding>

@property (readonly, copy, nonatomic) NSString *clientToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithClientToken:(id)a0;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
