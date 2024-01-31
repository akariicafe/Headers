@class NSOutputStream, NSString, NSMutableURLRequest, NSMutableData, NSInputStream, NSObject;
@protocol OS_dispatch_queue, SSHTTPServerRequestHandlerDelegate;

@interface SSHTTPServerRequestHandler : NSObject <NSStreamDelegate> {
    BOOL _incommingHeadersComplete;
    struct __CFHTTPMessage { } *_incommingMessage;
    NSMutableData *_incommingMessageBody;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSMutableURLRequest *_request;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property (weak, nonatomic) id<SSHTTPServerRequestHandlerDelegate> delegate;
@property (nonatomic) int downloadSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close;
- (void)close;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_errorResponseDataWithStatus:(short)a0 message:(id)a1;
- (BOOL)_handleReceivedDataWithError:(id *)a0;
- (void)_respondWithRequest:(id)a0 error:(id)a1;
- (BOOL)_shouldKeepRunning;
- (long long)_throttledWriteSpeed;
- (long long)_writeResponseData:(id)a0 error:(id *)a1;
- (id)initWithReadStream:(id)a0 writeStream:(id)a1 runLoop:(id)a2;

@end
