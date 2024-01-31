@interface PTPWrappedBytes : NSObject {
    unsigned long long _offset;
    unsigned long long _headerOffset;
    unsigned long long _capacity;
    BOOL _allocatedBytes;
    char *_bytes;
    int _fd;
    BOOL _useByteBuffer;
    unsigned long long _excessDataLength;
    double _progressNotificationTime;
    void /* function */ *_progressNotifier;
    void *_progressNotifierContext;
    int _lastNotifiedProgress;
}

+ (id)wrappedBytesWithBytes:(void *)a0 capacity:(unsigned long long)a1;
+ (id)wrappedBytesWithCapacity:(unsigned long long)a0;

- (unsigned long long)appendData:(id)a0;
- (unsigned long long)setCapacity:(unsigned long long)a0;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)capacity;
- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)length;
- (unsigned long long)offset;
- (void *)mutableBytes;
- (id)mutableData;
- (id)data;
- (const void *)bytes;
- (id)description;
- (unsigned long long)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)setHeaderOffset:(unsigned long long)a0;
- (unsigned long long)headerOffset;
- (unsigned long long)excessDataLength;
- (const void *)headerOffsetBytes;
- (id)initWithBytes:(void *)a0 capacity:(unsigned long long)a1;
- (id)initWithFileDescriptor:(int)a0 capacity:(unsigned long long)a1;
- (double)percentFull;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)a0;
- (void)setProgressNotifierCallback:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)wasInitWithFD;

@end
