@class NSString, NSObject;

@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;
- (void)setArray:(id)a0;

@end
