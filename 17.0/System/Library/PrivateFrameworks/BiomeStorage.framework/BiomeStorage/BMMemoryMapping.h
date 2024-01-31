@interface BMMemoryMapping : NSObject {
    int _protection;
    int _advice;
    _Atomic unsigned long long _currentWriteOffset;
    void *_start;
    unsigned long long _size;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _pageAlignedSize;
    unsigned long long _offsetSpace;
}

@property (readonly) void *start;
@property (readonly) char *end;
@property (readonly) unsigned long long currentWriteOffset;
@property (readonly) unsigned long long used;
@property (readonly) unsigned long long freeSpace;
@property (readonly) unsigned long long size;
@property (readonly) long long offset;
@property (readonly, getter=isWritable) BOOL writable;

+ (id)new;

- (id)dataAtOffset:(unsigned long long)a0 withLength:(unsigned long long)a1 makeCopy:(BOOL)a2;
- (void)sync;
- (id)init;
- (void)dealloc;
- (void)unmap;
- (BOOL)canAtomicallyAccessOffset:(unsigned long long)a0;
- (BOOL)mapWithFileHandle:(id)a0 fileSize:(unsigned long long)a1;
- (void)updateToMaxOfCurrentWriteOffsetAnd:(unsigned long long)a0;
- (BOOL)atomicUpdateOffset:(unsigned long long)a0 withValue:(union { unsigned long long x0; double x1; })a1 shouldReplace:(id /* block */)a2;
- (void)writeBytes:(const void *)a0 toOffset:(unsigned long long)a1 length:(unsigned long long)a2;
- (BOOL)isValidReadFromOffset:(unsigned long long)a0 withLength:(unsigned long long)a1;
- (id)initWithSize:(unsigned long long)a0 protection:(int)a1 advice:(int)a2 offset:(long long)a3;
- (unsigned char)atomicReadAtOffset:(unsigned long long)a0 value:(union { unsigned long long x0; double x1; } *)a1;
- (BOOL)isValidReadFromOffsetV2:(unsigned long long)a0 withLength:(unsigned long long)a1 currentFrameCount:(unsigned int)a2;
- (unsigned char)atomicWriteEightBytes:(unsigned long long)a0 toOffset:(unsigned long long)a1 expected:(unsigned long long *)a2;
- (void *)currentPosition;

@end
