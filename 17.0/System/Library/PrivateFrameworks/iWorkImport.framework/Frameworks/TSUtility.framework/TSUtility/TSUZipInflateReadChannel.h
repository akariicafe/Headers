@class NSString;
@protocol TSUStreamReadChannel;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {
    id<TSUStreamReadChannel> _readChannel;
    unsigned long long _remainingUncompressedSize;
    unsigned int _CRC;
    BOOL _validateCRC;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
    unsigned long long _outBufferSize;
    char *_outBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleFailureWithHandler:(id /* block */)a0 error:(id)a1;
- (id)initWithReadChannel:(id)a0 uncompressedSize:(unsigned long long)a1 CRC:(unsigned int)a2 validateCRC:(BOOL)a3;
- (void)prepareBuffer;
- (BOOL)processData:(id)a0 inflateResult:(int *)a1 CRC:(unsigned int *)a2 isDone:(BOOL)a3 handler:(id /* block */)a4;
- (void)readWithHandler:(id /* block */)a0;
- (void)readWithHandlerAndWait:(id /* block */)a0;

@end
