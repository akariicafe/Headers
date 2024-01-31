@class NSString, NSData;

@interface ICSCompressedInputStream : NSObject <ICSInputByteStream> {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } underStream;
    NSData *rawData;
    void *buffer;
    unsigned long long bufPos;
    unsigned long long bufLen;
    BOOL finalBlock;
    BOOL didFinalize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)read;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)eos;

@end
