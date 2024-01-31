@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; } *_reserved;
    int _accessCount;
}

- (void)setLength:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_destroyMemory;
- (unsigned long long)length;
- (void *)mutableBytes;
- (void)discardContentIfPossible;
- (const void *)bytes;
- (BOOL)beginContentAccess;
- (id)description;
- (BOOL)isContentDiscarded;
- (void)endContentAccess;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;

@end
