@interface UINibStringIDTable : NSObject {
    struct UIStringIDTableBucket **table;
    struct UIStringIDTableBucket { id x0; unsigned long long x1; struct UIStringIDTableBucket *x2; } *buckets;
    unsigned long long hashMask;
    unsigned long long count;
}

- (void)dealloc;
- (long long)count;
- (id)initWithKeysTransferingOwnership:(id *)a0 count:(unsigned long long)a1;
- (BOOL)lookupKey:(id)a0 identifier:(long long *)a1;

@end
