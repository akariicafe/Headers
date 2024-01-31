@class NSObject;
@protocol DEWriter;

@interface DEDecompressWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } stream;
@property (nonatomic) BOOL streamInitialized;
@property (nonatomic) BOOL streamEnded;

- (void)close;
- (id)init;
- (void)dealloc;
- (id)decompress:(id)a0;
- (void).cxx_destruct;
- (void)writeData:(id)a0;
- (id)initWithWriter:(id)a0;

@end
