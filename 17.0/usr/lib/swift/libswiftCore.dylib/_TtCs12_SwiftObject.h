@class NSString;

@interface _TtCs12_SwiftObject <NSObject> {
    Class isa;
    struct RefCounts<swift::RefCountBitsT<swift::RefCountIsInline>> { struct atomic<swift::RefCountBitsT<swift::RefCountIsInline>> { struct __cxx_atomic_impl<swift::RefCountBitsT<swift::RefCountIsInline>, std::__cxx_atomic_base_impl<swift::RefCountBitsT<swift::RefCountIsInline>>> { _Atomic struct RefCountBitsT<swift::RefCountIsInline> __a_value; } __a_; } refCounts; } refCounts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)retain;
+ (BOOL)allowsWeakReference;
+ (id)alloc;
+ (BOOL)retainWeakReference;
+ (unsigned long long)retainCount;
+ (void)initialize;
+ (id)autorelease;
+ (BOOL)_tryRetain;
+ (BOOL)conformsToProtocol:(id)a0;
+ (id)description;
+ (BOOL)_isDeallocating;
+ (id)debugDescription;
+ (Class)class;
+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (void)release;
+ (void /* function */ *)methodForSelector:(SEL)a0;
+ (BOOL)isMemberOfClass:(Class)a0;
+ (BOOL)respondsToSelector:(SEL)a0;
+ (Class)superclass;
+ (void /* function */ *)instanceMethodForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (struct _NSZone { } *)zone;
- (BOOL)isNSDictionary__;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)isNSValue__;
- (BOOL)isNSObject__;
- (BOOL)isNSCFConstantString__;
- (BOOL)isNSArray__;
- (BOOL)isNSSet__;
- (BOOL)isProxy;
- (BOOL)isNSData__;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isNSTimeZone__;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)_isDeallocating;
- (BOOL)isNSNumber__;
- (Class)class;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSString__;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isNSDate__;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_noteAssociatedObjects;
- (void)_setWeaklyReferenced;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)self;
- (id)_copyDescription;

@end
