@class WBSOnDeviceSearchSuggestionsModelEndpointFetcher, NSURLSession, NSURLSessionDownloadTask;

@interface WBSOnDeviceSearchSuggestionsModelDownloader : NSObject {
    NSURLSessionDownloadTask *_downloadTask;
    id /* block */ _completionHandler;
    WBSOnDeviceSearchSuggestionsModelEndpointFetcher *_endpointFetcher;
    NSURLSession *_urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)_callCompletionHandlerWithError:(id)a0;
- (void)_cancelPendingDownload;
- (void)_downloadModelAtEndpoint:(id)a0 forLocale:(id)a1;
- (void)downloadOnDeviceSearchSuggestionsModelForLocale:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
