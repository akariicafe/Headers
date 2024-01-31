@class AVURLAsset, NSURLRequest, NSURLResponse;

@interface AVAggregateAssetDownloadTask : NSURLSessionTask

@property (readonly, nonatomic) AVURLAsset *URLAsset;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSURLResponse *response;

@end
