@class NSString, GEOOfflineDataRequest, GEODataURLSession, GEODataURLSessionTask, NSObject;
@protocol OS_os_log, GEOOfflineDataRequesterDelegate, OS_dispatch_queue;

@interface GEOOfflineDataRequester : NSObject <GEODataURLSessionTaskDelegate, GEOOfflineDataRequester> {
    unsigned long long _requestOptions;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    GEODataURLSession *_dataSession;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEODataURLSessionTask *_task;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOOfflineDataRequest *request;
@property (weak, nonatomic) id<GEOOfflineDataRequesterDelegate> delegate;

- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)a0 requestOptions:(unsigned long long)a1 log:(id)a2 logPrefix:(id)a3;

@end
