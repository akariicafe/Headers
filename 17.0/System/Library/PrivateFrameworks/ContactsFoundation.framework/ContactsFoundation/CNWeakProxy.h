@interface CNWeakProxy : NSProxy {
    Class _targetClass;
    id _weakReference;
}

+ (id)weakProxyWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
