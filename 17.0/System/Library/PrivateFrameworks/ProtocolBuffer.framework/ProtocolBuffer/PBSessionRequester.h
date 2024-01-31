@class NSString, NSURL, NSURLSession, NSArray, NSOperationQueue, NSDictionary, PBDataReader, NSMutableArray, NSMutableDictionary, NSMutableData, NSURLSessionTask;
@protocol PBSessionRequesterDelegate;

@interface PBSessionRequester : NSObject <NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate> {
    NSOperationQueue *_delegateQueue;
    NSOperationQueue *_sessionDelegateQ;
    NSMutableData *_data;
    PBDataReader *_dataReader;
    unsigned long long _lastGoodDataOffset;
    unsigned long long _timeRequestSent;
    unsigned long long _timeResponseReceived;
    long long _responseStatusCode;
    NSMutableArray *_requests;
    NSMutableArray *_responses;
    NSMutableArray *_internalRequests;
    NSMutableArray *_internalResponses;
    NSMutableDictionary *_httpRequestHeaders;
    BOOL _didNotifyRequestCompleted;
    NSDictionary *_connectionProperties;
    struct { unsigned char ignoresResponse : 1; unsigned char loading : 1; unsigned char needsCancel : 1; unsigned char responseStatusSet : 1; unsigned char parsedResponseHeader : 1; unsigned char delegateDidReceiveResponse : 1; unsigned char delegateDidFinish : 1; unsigned char delegateDidCancel : 1; unsigned char delegateDidFailWithError : 1; unsigned char paused : 1; unsigned char resuming : 1; } _flags;
}

@property (retain, nonatomic) NSURL *URL;
@property (readonly, weak, nonatomic) id<PBSessionRequesterDelegate> delegate;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *currentTask;
@property (nonatomic) BOOL ignoresResponse;
@property (retain, nonatomic) NSString *logRequestToFile;
@property (retain, nonatomic) NSString *logResponseToFile;
@property (readonly, weak, nonatomic) NSArray *requests;
@property (readonly, nonatomic) unsigned long long uploadPayloadSize;
@property (readonly, nonatomic) unsigned long long downloadPayloadSize;
@property (readonly, nonatomic) unsigned long long requestResponseTime;
@property (copy, nonatomic) NSString *apsRelayTopic;
@property (nonatomic) unsigned long long nwActivityDomain;
@property (nonatomic) unsigned long long nwActivityLabel;
@property (nonatomic) double timeoutSeconds;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSDictionary *httpRequestHeaders;
@property (retain, nonatomic) NSDictionary *httpResponseHeaders;
@property (nonatomic) BOOL shouldHandleCookies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)usesEncodedMessages;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)pause;
- (void)dealloc;
- (void)start;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)addRequest:(id)a0;
- (BOOL)isPaused;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)resume;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)cancel;
- (void)clearRequests;
- (id)requestPreamble;
- (void)addInternalRequest:(id)a0;
- (void)cancelWithErrorCode:(long long)a0;
- (id)decodeResponseData:(id)a0;
- (void)encodeRequestData:(id)a0 startRequestCallback:(id /* block */)a1;
- (void)handleResponse:(id)a0 forInternalRequest:(id)a1;
- (id)initWithURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)internalRequests;
- (id)newMutableURLRequestWithURL:(id)a0;
- (id)newSessionTaskOnSession:(id)a0 withURLRequest:(id)a1;
- (id)newSessionWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id)newSessionWithDelegate:(id)a0 delegateQueue:(id)a1 connectionProperties:(id)a2;
- (BOOL)readResponsePreamble:(id)a0;
- (id)responseForInternalRequest:(id)a0;
- (id)responseForRequest:(id)a0;
- (void)setHttpRequestHeader:(id)a0 forKey:(id)a1;
- (void)setNeedsCancel;
- (void)startWithConnectionProperties:(id)a0;
- (id)tryReadResponseData:(id)a0 forRequest:(id)a1 forResponseClass:(Class)a2;
- (void)writeRequest:(id)a0 into:(id)a1;

@end
