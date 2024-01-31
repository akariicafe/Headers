@class NSOutputStream, NSString, NSObject, NSFileHandle, NSData, NSMutableArray, NSInputStream;
@protocol OS_dispatch_queue;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned long long _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _zlibStream;
    BOOL _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (nonatomic) BOOL shouldCompress;
@property (nonatomic) BOOL hasInitedCompression;
@property (nonatomic) BOOL haveFinishedCompression;
@property BOOL haveFinishedStreaming;
@property (nonatomic) unsigned long long bufferSize;
@property (copy, nonatomic) id /* block */ logRequestObjectBlock;
@property (retain, nonatomic) NSFileHandle *binaryLogFileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataForMessage:(id)a0;
+ (id)uncompressedDataForStreamedObjects:(id)a0;

- (void)dealloc;
- (id)open;
- (void)_prepareObjectForStreaming:(id)a0;
- (void)tearDown;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_tearDownOutputStream;
- (long long)_streamNextObject:(id)a0;
- (void)setStreamedObjects:(id)a0;
- (long long)_writeDataToStream:(id)a0;
- (id)initWithCompression:(BOOL)a0;
- (BOOL)_finishStreaming:(id)a0;
- (id)_compressBodyData:(id)a0 shouldFlush:(BOOL)a1;

@end
