@class NSURL, NSMutableDictionary;

@interface CLSSocialService : NSObject {
    NSMutableDictionary *_proxy;
}

@property (readonly) unsigned long long intent;
@property (copy) NSURL *proxyURL;

+ (id)defaultFileName;
+ (id)socialService;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateMemoryCaches;
- (BOOL)flushProxy;
- (id)initWithProxyAtURL:(id)a0 andIntent:(unsigned long long)a1;
- (id)proxiedValueForKey:(id)a0;
- (void)setProxiedValue:(id)a0 forKey:(id)a1;
- (void)updateProxy;

@end
