@class NSString, NSData;

@interface SGSeekableData : NSObject <SGSeekable> {
    NSData *_data;
    const void *_bytes;
    unsigned long long _length;
}

@property (readonly) unsigned long long offsetInFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)seekToFileOffset:(unsigned long long)a0;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithMemoryMappedPath:(id)a0 error:(id *)a1;
- (const void *)dataOfLength:(unsigned long long)a0;
- (id)initWithMemoryMappedPath:(id)a0;

@end
