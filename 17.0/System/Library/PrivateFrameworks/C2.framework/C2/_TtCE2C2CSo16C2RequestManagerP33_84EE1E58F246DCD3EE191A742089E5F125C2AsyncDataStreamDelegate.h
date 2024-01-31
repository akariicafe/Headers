@class NSURLSession, NSHTTPURLResponse, NSURLResponse, NSURLSessionTask, NSURLSessionDataTask, NSURLRequest, NSInputStream;

@interface _TtCE2C2CSo16C2RequestManagerP33_84EE1E58F246DCD3EE191A742089E5F125C2AsyncDataStreamDelegate : NSObject <C2RequestDelegate> {
    void /* unknown type, empty encoding */ responseConitnuation;
    void /* unknown type, empty encoding */ bytesStreamContinuation;
}

- (void)URLSession:(NSURLSession *)a0 dataTask:(NSURLSessionDataTask *)a1 didReceiveResponse:(NSURLResponse *)a2 completionHandler:(void (^)(long long))a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (id)init;
- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 willPerformHTTPRedirection:(NSHTTPURLResponse *)a2 newRequest:(NSURLRequest *)a3 completionHandler:(void (^)(NSURLRequest *))a4;
- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 _willSendRequestForEstablishedConnection:(NSURLRequest *)a2 completionHandler:(void (^)(NSURLRequest *))a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 needNewBodyStream:(void (^)(NSInputStream *))a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;

@end
