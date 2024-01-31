@class NSURLRequest, NSURLResponse, NSURLSessionDataTask, NSURLCache, NSObject;
@protocol OS_dispatch_data;

@interface NWURLLoaderCache : NSObject {
    NSURLCache *_cache;
    unsigned long long _cacheStoragePolicy;
    NSObject<OS_dispatch_data> *_dataToCache;
    unsigned long long _maxItemSizeToCache;
    NSURLResponse *_response;
    NSURLSessionDataTask *_dataTask;
    NSURLRequest *_request;
}

- (void).cxx_destruct;

@end
