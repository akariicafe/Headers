@class NSDictionary, NSURLSessionDataTask, NSURLSession;

@interface WBSOnDeviceSearchSuggestionsModelEndpointFetcher : NSObject {
    NSURLSessionDataTask *_dataTask;
    NSDictionary *_modelEndpointInfos;
    NSURLSession *_urlSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)_parseEndpointsFromString:(id)a0;
- (void)fetchModelEndpointURLsWithCompletionHandler:(id /* block */)a0;

@end
