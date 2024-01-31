@class NSOutputStream, NSString, NSURLResponse, NSMutableURLRequest, NSError, NSURLConnection;

@interface JXURLConnectionOperation : JXOperation <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property (retain) NSURLConnection *connection;
@property (retain) NSMutableURLRequest *request;
@property (retain) NSURLResponse *response;
@property (retain) NSError *error;
@property long long bytesDownloaded;
@property long long bytesUploaded;
@property (retain) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)networkThread;
+ (void)runLoopForever;

- (id)initWithURL:(id)a0;
- (void)startConnection;
- (id)init;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)main;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)stopConnection;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)willFinish;

@end
