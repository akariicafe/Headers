@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {
    NSData *mData;
}

- (BOOL)isReadable;
- (id)initWithDataRepresentation:(id)a0;
- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)data;
- (id)inputStream;
- (long long)dataLength;
- (id)initWithDataNoCopy:(id)a0;
- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)a0;
- (BOOL)hasSameLocationAs:(id)a0;
- (unsigned long long)readIntoData:(id)a0;

@end
