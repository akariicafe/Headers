@protocol TSPProxyObjectMapping;

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>

@property (readonly, nonatomic) long long targetType;
@property (weak, nonatomic) id<TSPProxyObjectMapping> proxyObjectMapping;

- (void).cxx_destruct;
- (void)setStrongLazyReference:(id)a0 message:(void *)a1;
- (void)setStrongReference:(id)a0 message:(void *)a1;

@end
