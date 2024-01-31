@class NSURLSession, NSString, HDOntologyShardDownloader, NSError, HKOntologyShardRegistryEntry, NSObject;
@protocol OS_dispatch_group;

@interface _HDOntologyShardDownloadTask : NSObject <NSURLSessionTaskDelegate> {
    HKOntologyShardRegistryEntry *_entry;
    HDOntologyShardDownloader *_downloader;
    NSURLSession *_session;
    NSObject<OS_dispatch_group> *_group;
}

@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (BOOL)_handleResponse:(id)a0 task:(id)a1;
- (void)resume;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initForEntry:(id)a0 downloader:(id)a1 session:(id)a2 group:(id)a3;

@end
