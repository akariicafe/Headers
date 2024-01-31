@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    unsigned long long _hash;
}

+ (id)weakProxyForObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isProxy;
- (BOOL)conformsToProtocol:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (Class)class;
- (BOOL)isEqual:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)self;

@end
