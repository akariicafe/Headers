@class _LSDatabase, NSError;

@interface _LSDBEnumerator : LSEnumerator <NSCopying> {
    struct Context { struct LSContext *_contextPointer; struct LSContext { _LSDatabase *db; } _contextStorage; BOOL _created; NSError *_error; } _context;
    unsigned long long _index;
    id _lastFastObject;
    unsigned char _hasReachedEnd : 1;
    unsigned char _hasTriedToPrepare : 1;
    unsigned char _hasPrepared : 1;
}

- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (id)nextObject;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id)swift_firstWhere:(id /* block */)a0;
- (id).cxx_construct;
- (id)_initWithContext:(struct LSContext { id x0; } *)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)swift_forEach:(id /* block */)a0;

@end
