@class NSArray, NSURL, APUnfairLock, NSURLSessionConfiguration;

@interface APProxySessionConfigurationProvider : NSObject {
    NSURLSessionConfiguration *_connectProxyConfig;
}

@property (retain, nonatomic) NSArray *protocolClasses;
@property (retain, nonatomic) NSURL *proxyURL;
@property (retain, nonatomic) NSURL *defaultProxyURL;
@property (readonly, nonatomic) APUnfairLock *lock;

- (void).cxx_destruct;
- (id)_createConnectProxyConfig;
- (void)addProtocolClasses:(id)a0;
- (id)connectProxyConfig;
- (id)initWithDefaultProxyURL:(id)a0;

@end
