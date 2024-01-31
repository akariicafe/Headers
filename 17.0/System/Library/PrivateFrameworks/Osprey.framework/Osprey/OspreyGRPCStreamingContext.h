@class NSInputStream, NSString, OspreyMessageReader, OspreyBufferedOutputStream, NSObject, OspreyMessageWriter;
@protocol OS_dispatch_queue;

@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completion;
    OspreyMessageReader *_messageReader;
    OspreyMessageWriter *_messageWriter;
    NSInputStream *_inputStream;
    OspreyBufferedOutputStream *_outputStream;
    BOOL _closed;
}

@property (nonatomic, getter=isCompressionEnabled) BOOL compressionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWriting;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
- (void)_writeFrame:(id)a0 compressed:(BOOL)a1 error:(id *)a2;
- (void)bindToUrlRequest:(id)a0;
- (void)handleResponseData:(id)a0;
- (id)initWithQueue:(id)a0 responseHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)writeFrame:(id)a0;
- (void)writeFrame:(id)a0 compressed:(BOOL)a1;

@end
