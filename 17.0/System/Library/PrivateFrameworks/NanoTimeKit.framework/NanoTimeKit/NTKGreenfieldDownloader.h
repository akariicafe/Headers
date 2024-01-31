@class NSURL, NSURLSessionDownloadTask;

@interface NTKGreenfieldDownloader : NSObject {
    NSURL *_remoteWatchFaceURL;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_downloadedFileURL;
}

- (void)cancelDownload;
- (void).cxx_destruct;
- (id)_downloadURL;
- (void)downloadCleanUp;
- (BOOL)_copyFileFromURL:(id)a0;
- (id)_downloadedFolderURL;
- (long long)_greenfieldErrorFromURLSessionError:(long long)a0;
- (void)downloadWithCompletionBlock:(id /* block */)a0;
- (id)initWithWatchFaceURL:(id)a0;

@end
