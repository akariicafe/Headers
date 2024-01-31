@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (id)init;
- (void)dealloc;
- (id)fileHandleForWriting;
- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
