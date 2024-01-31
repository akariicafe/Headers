@class NSArray, NSString, NSURLSession;

@interface SBFFileCacheURLFaultHandler : NSObject <SBFFileCacheFaultHandler>

@property (retain) NSURLSession *urlSession;
@property (copy) NSArray *retryIntervals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)attemptLoadFromURL:(id)a0 session:(id)a1 retryIntervalEnumerator:(id)a2 completionHandler:(id /* block */)a3;
- (void)fileCache:(id)a0 loadFileForIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)performLoadFromURL:(id)a0 session:(id)a1 completionHandler:(id /* block */)a2;

@end
