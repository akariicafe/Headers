@interface NSOutputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) BOOL hasSpaceAvailable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)outputStreamToBuffer:(char *)a0 capacity:(unsigned long long)a1;
+ (id)outputStreamToFileAtPath:(id)a0 append:(BOOL)a1;
+ (id)outputStreamToMemory;
+ (id)outputStreamWithURL:(id)a0 append:(BOOL)a1;

- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)_cfTypeID;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)hasSpaceAvailable;
- (void)dealloc;
- (id)initToMemory;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (struct { long long x0; int x1; })_cfStreamError;

@end
