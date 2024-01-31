@class NSDate, NSString, NSError, NSURLSession, NetworkQualityConfiguration, NSMutableDictionary, NetworkQualityAssessment, NPTPerformanceTestConfiguration, NPTMetricResult, NSObject, NSMutableArray, NSMutableURLRequest;
@protocol OS_dispatch_source, OS_nw_activity;

@interface NPTUpload : NSObject <NSSecureCoding, NetworkQualityDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate, NSCopying> {
    NSURLSession *uploadSession;
    NSDate *initialTime;
    unsigned long long maxConcurrentStreams;
    unsigned long long processedStreamEndCount;
    NSMutableURLRequest *request;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *uploadActivity;
    NSMutableDictionary *taskDict;
    NSObject<OS_dispatch_source> *timeoutTimer;
    NSMutableArray *buffer;
    double recentBufferTime;
    NSDate *endTimeAggregate;
    BOOL smartUpload;
    unsigned long long timedUploadLength;
    unsigned long long uploadFileSize;
    double stableSpeedToLog;
    NSError *uploadError;
    BOOL stopAtFileSizeEnabled;
    NSString *callingClient;
    double maxSpeedObserved;
    BOOL legacy;
    NPTPerformanceTestConfiguration *testConfig;
    NetworkQualityAssessment *nqTest;
    NetworkQualityConfiguration *nqConfig;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTMetricResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTimer;
- (void)startTasks;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (BOOL)finishedAllTasks;
- (void)encodeWithCoder:(id)a0;
- (id)createRandomDataOfSize:(unsigned long long)a0;
- (id)createTempFileWithData:(id)a0 named:(id)a1;
- (id)realTimeSpeedMetricOverall;
- (double)checkAndReturnSpeedStablized:(id)a0;
- (int)determineSuspensionThreshold;
- (id)checkInterfaceSpecified;
- (void)removeTempFileNamed:(id)a0;
- (id)aggregateResults;
- (void)completeActivityWithReason:(int)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)startLegacyUploadWithCompletion:(id /* block */)a0;
- (void)cancelDispatchTimer;
- (BOOL)inTimedMode;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)createHTTPBodyWithBoundary:(id)a0 usingData:(id)a1 withMimeType:(id)a2 withFileName:(id)a3;
- (void)cleanUp;
- (void)cancelDispatchTimerAndSession;
- (void)cancel;
- (double)minNonZeroValue:(double)a0 comparisonValue:(double)a1;
- (BOOL)isLastTask;
- (void)kickOffNewUpload:(long long)a0 suspensionThresholdEnum:(int)a1;
- (id)processNQResult:(id)a0;
- (id)setupNewUploadTask:(unsigned long long)a0 suspensionThresholdEnum:(int)a1;
- (void)startNQUploadWithCompletion:(id /* block */)a0;
- (id)initWithNetworkActivityParent:(id)a0 testConfiguration:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (BOOL)isTimerCancelledError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)progress:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)startUploadWithCompletion:(id /* block */)a0;

@end
