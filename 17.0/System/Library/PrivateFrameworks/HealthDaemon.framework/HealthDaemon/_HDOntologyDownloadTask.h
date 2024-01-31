@class NSURLSession, NSArray, HDOntologyShardDownloader, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface _HDOntologyDownloadTask : NSObject {
    HDOntologyShardDownloader *_downloader;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_downloadGroup;
    NSArray *_downloadTasks;
}

- (id)init;
- (void).cxx_destruct;
- (id)_taskError;
- (void)downloadShardsForEntries:(id)a0 completion:(id /* block */)a1;
- (id)initForDownloader:(id)a0 session:(id)a1 queue:(id)a2;

@end
