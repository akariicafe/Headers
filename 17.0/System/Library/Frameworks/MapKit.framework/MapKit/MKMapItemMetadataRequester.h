@class NSString, NSMapTable, NSURLSession;

@interface MKMapItemMetadataRequester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDelegate> {
    NSURLSession *_session;
    NSMapTable *_requestsForURLs;
    NSMapTable *_tasksForURLs;
    NSMapTable *_dataForTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)sendRequest:(id)a0;
- (void)cancelRequestsForMapItem:(id)a0;
- (void)handleTask:(id)a0 withData:(id)a1 error:(id)a2;

@end
