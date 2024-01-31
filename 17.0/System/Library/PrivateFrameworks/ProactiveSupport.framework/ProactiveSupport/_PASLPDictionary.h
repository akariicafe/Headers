@class NSData, _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
    NSData *_objectsAndKeys;
}

- (id)allValues;
- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (id)keyEnumerator;
- (unsigned long long)count;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allKeysForObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
