@interface JSObjCClassInfo : NSObject {
    Class m_class;
    BOOL m_block;
    struct NakedPtr<OpaqueJSClass> { struct OpaqueJSClass *m_ptr; } m_classRef;
    struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } m_prototype;
    struct Weak<JSC::JSObject> { struct WeakImpl *m_impl; } m_constructor;
    struct Weak<JSC::Structure> { struct WeakImpl *m_impl; } m_structure;
}

- (struct pair<JSC::JSObject *, JSC::JSObject *> { struct JSObject *x0; struct JSObject *x1; })allocateConstructorAndPrototypeInContext:(id)a0;
- (void)dealloc;
- (void *)wrapperForObject:(id)a0 inContext:(id)a1;
- (void *)prototypeInContext:(id)a0;
- (id).cxx_construct;
- (void *)structureInContext:(id)a0;
- (void).cxx_destruct;
- (id)initForClass:(Class)a0;
- (void *)constructorInContext:(id)a0;

@end
