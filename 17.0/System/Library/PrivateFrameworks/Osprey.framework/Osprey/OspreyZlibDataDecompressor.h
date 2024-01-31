@interface OspreyZlibDataDecompressor : NSObject {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _inflateStream;
    unsigned char _inflateBuffer[8192];
}

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(long long)a0;
- (id)decompressedDataForData:(id)a0 error:(id *)a1;

@end
