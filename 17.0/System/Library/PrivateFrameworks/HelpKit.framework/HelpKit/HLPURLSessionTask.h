@class NSHashTable, NSString, NSURL, NSError, NSObject, NSMutableData, NSURLSessionTask, NSHTTPURLResponse;
@protocol HLPURLSessionDelegate, OS_dispatch_queue;

@interface HLPURLSessionTask : NSObject {
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
}

@property (retain, nonatomic) NSHashTable *sessionTaskDelegates;
@property (weak, nonatomic) id<HLPURLSessionDelegate> networkDelegate;
@property (nonatomic) struct HLPURLSessionDelegateResponds { BOOL willCacheResponse; BOOL willPerformHTTPRedirection; BOOL downloadTaskDidFinishDownloadingToURL; BOOL didReceiveResponse; BOOL didCompleteWithError; BOOL taskDidReceiveChallenge; } delegateResponds;
@property (nonatomic) float priority;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL isCacheData;
@property (nonatomic) unsigned long long downloadTaskTotalBytes;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id formattedData;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSString *lastModified;
@property (retain, nonatomic) NSMutableData *dataTaskData;
@property (retain, nonatomic) NSError *dataError;
@property (readonly, nonatomic) NSURL *URL;

+ (struct HLPURLSessionDelegateResponds { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })delegateRespondsWithDelegate:(id)a0;

- (void)registerDelegate:(id)a0;
- (void)dealloc;
- (float)priority;
- (void)unregisterDelegate:(id)a0;
- (void)setPriority:(float)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSessionTask:(id)a0 identifier:(id)a1;
- (void)didCompleteWithError:(id)a0;

@end
