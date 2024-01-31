@class NSString, NSMutableURLRequest, C2RequestOptions, NSURLSessionTask, C2MetricOptions;

@interface C2ReportMetrics : NSObject <C2RequestDelegate>

@property (nonatomic) BOOL ignoreRequestThrottle;
@property (retain, nonatomic) NSString *requestThrottleIdentifier;
@property (nonatomic) unsigned long long requestThrottleLimit;
@property (retain, nonatomic) NSMutableURLRequest *metricRequest;
@property (retain, nonatomic) C2RequestOptions *metricsTransportRequestOptions;
@property (retain, nonatomic) NSURLSessionTask *metricTask;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (copy, nonatomic) id /* block */ testBehavior_tooManyTasksRunning;
@property (copy, nonatomic) id /* block */ testBehavior_didCompleteWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportMetricWithOptions:(id)a0 genericMetricType:(long long)a1 eventName:(id)a2 startTime:(id)a3 endTime:(id)a4 attributes:(id)a5;
+ (void)_c2FormatValueForRTC:(id)a0 keyPrefix:(id)a1 targetDictionary:(id)a2 multipleOperationGroups:(BOOL)a3;
+ (void)_reportWithOptions:(id)a0 networkEvent:(id)a1 genericEvent:(id)a2 triggers:(int)a3 eventName:(id)a4 startTime:(id)a5 endTime:(id)a6 attributes:(id)a7;
+ (id)gzipDecode:(id)a0;
+ (id)gzipEncode:(id)a0;
+ (id)metricsForMetricRequestOptions:(id)a0 networkEvent:(id)a1 genericEvent:(id)a2 triggers:(int)a3;
+ (void)reportNetworkEvent:(id)a0 triggers:(int)a1 originalSessionTask:(id)a2;
+ (id)requestForMetricRequestOptions:(id)a0 metrics:(id)a1;

- (void)send;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithMetricRequest:(id)a0 metricRequestOptions:(id)a1 ignoreRequestThrottle:(BOOL)a2 requestThrottleIdentifier:(id)a3 requestThrottleLimit:(unsigned long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;

@end
