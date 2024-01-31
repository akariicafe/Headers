@interface FigFlatToNSDictionaryWrapper : NSDictionary {
    struct OpaqueFigFlatDictionary { } *_flatDictionary;
    struct OpaqueFigFlatDictionaryKeySpec { } *_keySpec;
    int _keySpace;
    void *_dictionaryBacking;
    void *_exportedKeySpec;
    id /* block */ _deallocatorBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lazyInitializationMutex;
}

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0 keySpec:(struct OpaqueFigFlatDictionaryKeySpec { } *)a1;
- (id)initLazilyWithFlatDictionaryBacking:(void *)a0 exportedKeySpec:(void *)a1 deallocatorBlock:(id /* block */)a2;

@end
