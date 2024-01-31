@interface JSWrapperMap : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } m_classMap;
    struct unique_ptr<JSC::WeakGCMap<id, JSC::JSObject>, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> { struct __compressed_pair<JSC::WeakGCMap<id, JSC::JSObject> *, std::default_delete<JSC::WeakGCMap<id, JSC::JSObject>>> { void *__value_; } __ptr_; } m_cachedJSWrappers;
    struct RetainPtr<NSMapTable> { void *m_ptr; } m_cachedObjCWrappers;
}

- (id)jsWrapperForObject:(id)a0 inContext:(id)a1;
- (id).cxx_construct;
- (id)initWithGlobalContextRef:(struct OpaqueJSContext { } *)a0;
- (void).cxx_destruct;
- (id)classInfoForClass:(Class)a0;
- (id)objcWrapperForJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;

@end
