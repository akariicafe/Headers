@interface RWIProtocolJSONObject : NSObject {
    struct RefPtr<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Object>> { struct Object *m_ptr; } _object;
}

- (void)setString:(id)a0 forKey:(id)a1;
- (void)removeKey:(id)a0;
- (id)initWithJSONObject:(void *)a0;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void)setInteger:(int)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (int)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (struct RefPtr<WTF::JSONImpl::Array, WTF::RawPtrTraits<WTF::JSONImpl::Array>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Array>> { struct Array *x0; })JSONArrayForKey:(id)a0;
- (void)setJSONArray:(void *)a0 forKey:(id)a1;
- (struct Ref<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>> { struct Object *x0; })toJSONObject;

@end
