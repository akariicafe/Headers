@class m_tableForLLDB;

@interface WKRemoteObjectEncoder : NSCoder {
    struct RefPtr<API::Dictionary, WTF::RawPtrTraits<API::Dictionary>, WTF::DefaultRefDerefTraits<API::Dictionary>> { struct Dictionary *m_ptr; } _rootDictionary;
    void *_objectStream;
    void *_currentDictionary;
    struct HashSet<NSObject *, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTableTraits> { struct HashTable<NSObject *, NSObject *, WTF::IdentityExtractor, WTF::DefaultHash<NSObject *>, WTF::HashTraits<NSObject *>, WTF::HashTraits<NSObject *>> { union { m_tableForLLDB **m_table; unsigned int *x0; } ; } m_impl; } _objectsBeingEncoded;
}

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)init;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (void *)rootObjectDictionary;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)requiresSecureCoding;

@end
