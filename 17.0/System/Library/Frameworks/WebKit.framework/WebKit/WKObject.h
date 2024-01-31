@class NSString;

@interface WKObject : NSProxy <WKObject> {
    BOOL _hasInitializedTarget;
    struct RetainPtr<NSObject> { void *m_ptr; } _target;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (BOOL)isNSDictionary__;
- (void)dealloc;
- (BOOL)isNSValue__;
- (BOOL)isNSObject__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSArray__;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isNSSet__;
- (id)_web_createTarget;
- (BOOL)isNSData__;
- (BOOL)conformsToProtocol:(id)a0;
- (id).cxx_construct;
- (Class)classForCoder;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isNSTimeZone__;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (BOOL)isNSNumber__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSString__;
- (BOOL)isEqual:(id)a0;
- (Class)classForKeyedArchiver;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isNSDate__;
- (BOOL)respondsToSelector:(SEL)a0;

@end
