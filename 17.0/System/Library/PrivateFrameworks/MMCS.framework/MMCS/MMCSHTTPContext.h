@class NSOutputStream, NSURLSession, NSDictionary, NSString, NSURLSessionDataTask, NSInputStream;

@interface MMCSHTTPContext : NSObject <C2RequestDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>

@property (nonatomic) struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; } x0; int x1; struct Metricsinfo__HTTPMetricsInfo { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; char *x1; int x2; int x3; int x4; int x5; int x6; double x7; int x8; double x9; int x10; double x11; double x12; double x13; long long x14; long long x15; int x16; long long x17; unsigned long long x18; int x19; double x20; int x21; long long x22; int x23; long long x24; struct Chunkserver__ErrorResponse *x25; int x26; double x27; int x28; double x29; } x2; struct __CFString *x3; long long x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; int x13; struct __CFUUID *x14; double x15; double x16; struct __CFError *x17; struct __CFHTTPMessage *x18; unsigned char x19; unsigned long long x20; unsigned long long x21; struct _mmcs_http_request_options *x22; double x23; double x24; struct __CFHTTPMessage *x25; unsigned char x26; struct __CFData *x27; unsigned char x28; struct __sFILE *x29; struct __sFILE *x30; struct Metricsinfo__SocketInfo { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; char *x1; char *x2; unsigned int x3; int x4; } x31; struct mmcs_metrics_http_info *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void *x42; void *x43; struct os_activity_s *x44; struct voucher_s *x45; struct mmcs_read_stream_pool *x46; struct _mmcs_perform_target *x47; struct __CFData *x48; union { struct mmcs_cfnetwork_http_context *x0; struct mmcs_nsurlsession_http_context *x1; struct mmcs_curl_http_context *x2; void *x3; } x49; } *hc;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (retain, nonatomic) NSDictionary *timingData;
@property (nonatomic) BOOL didOpen;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isTaskDone;
@property (nonatomic) BOOL requestIsStreamed;
@property (nonatomic) BOOL isHandlingError;
@property (nonatomic) struct os_activity_s { } *activityMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CFError { } *)send;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)requestBodyCanAcceptData;
- (void)invalidateStreamPair;
- (void)invalidate;
- (BOOL)createNewRequestBodyInputStream;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)requestBodyDone;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)cleanupRequest;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)cleanupResponse;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (long long)writeRequestBody:(const char *)a0 maxLength:(unsigned long long)a1;
- (long long)countOfRequestBodyBytesSent;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)initWithContext:(struct mmcs_http_context { struct _C3Base { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; } x0; int x1; struct Metricsinfo__HTTPMetricsInfo { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; char *x1; int x2; int x3; int x4; int x5; int x6; double x7; int x8; double x9; int x10; double x11; double x12; double x13; long long x14; long long x15; int x16; long long x17; unsigned long long x18; int x19; double x20; int x21; long long x22; int x23; long long x24; struct Chunkserver__ErrorResponse *x25; int x26; double x27; int x28; double x29; } x2; struct __CFString *x3; long long x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; int x13; struct __CFUUID *x14; double x15; double x16; struct __CFError *x17; struct __CFHTTPMessage *x18; unsigned char x19; unsigned long long x20; unsigned long long x21; struct _mmcs_http_request_options *x22; double x23; double x24; struct __CFHTTPMessage *x25; unsigned char x26; struct __CFData *x27; unsigned char x28; struct __sFILE *x29; struct __sFILE *x30; struct Metricsinfo__SocketInfo { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; char *x1; char *x2; unsigned int x3; int x4; } x31; struct mmcs_metrics_http_info *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void *x42; void *x43; struct os_activity_s *x44; struct voucher_s *x45; struct mmcs_read_stream_pool *x46; struct _mmcs_perform_target *x47; struct __CFData *x48; union { struct mmcs_cfnetwork_http_context *x0; struct mmcs_nsurlsession_http_context *x1; struct mmcs_curl_http_context *x2; void *x3; } x49; } *)a0 options:(const struct mmcs_http_context_options { struct __CFString *x0; struct __CFHTTPMessage *x1; struct _mmcs_http_request_options *x2; double x3; double x4; unsigned long long x5; unsigned long long x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void *x14; void /* function */ *x15; void *x16; unsigned char x17; double x18; struct os_activity_s *x19; } *)a1 activityMarker:(struct os_activity_s { } *)a2;

@end
