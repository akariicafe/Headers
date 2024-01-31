@class NSString, NSObject;

@interface NSKeyValueMutableSet : NSMutableSet <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;

@end
