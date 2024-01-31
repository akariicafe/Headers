@class JSValue;

@interface JSManagedValue : NSObject {
    struct Weak<JSC::JSGlobalObject> { struct WeakImpl *m_impl; } m_globalObject;
    struct RefPtr<JSC::JSLock, WTF::RawPtrTraits<JSC::JSLock>, WTF::DefaultRefDerefTraits<JSC::JSLock>> { struct JSLock *m_ptr; } m_lock;
    struct JSWeakValue { int m_tag; union WeakValueUnion { struct JSValue { union EncodedValueDescriptor { long long asInt64; struct JSCell *ptr; struct { int payload; int tag; } asBits; } u; } primitive; struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } object; struct Weak<JSC::JSString> { struct WeakImpl *m_impl; } string; } m_value; } m_weakValue;
    struct RetainPtr<NSMapTable> { void *m_ptr; } m_owners;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)a0 andOwner:(id)a1;
+ (id)managedValueWithValue:(id)a0;

- (id)init;
- (void)dealloc;
- (void)disconnectValue;
- (id)initWithValue:(id)a0;
- (id).cxx_construct;
- (void)didAddOwner:(id)a0;
- (void).cxx_destruct;
- (void)didRemoveOwner:(id)a0;

@end
