@class NSNumber, NSFileHandle;

@interface UAFileChunkInputStream : NSInputStream

@property (retain) NSFileHandle *file;
@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property long long readSize;
@property unsigned long long status;

- (void)close;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)open;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)propertyForKey:(id)a0;
- (id)initWithFileHandle:(id)a0 offsetInFile:(id)a1 size:(long long)a2;

@end
