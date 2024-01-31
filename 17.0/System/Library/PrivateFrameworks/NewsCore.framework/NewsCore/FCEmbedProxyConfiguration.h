@class NSString;

@interface FCEmbedProxyConfiguration : NSObject

@property (readonly, nonatomic) NSString *proxyHost;
@property (readonly, nonatomic) NSString *proxyAutoConfig;
@property (readonly, nonatomic) BOOL usePrivateRelay;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
