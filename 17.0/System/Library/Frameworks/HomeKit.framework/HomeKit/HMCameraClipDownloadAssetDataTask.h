@class NSMutableURLRequest;
@protocol HMCameraClipDownloadAssetDataTaskHandling;

@interface HMCameraClipDownloadAssetDataTask : NSObject

@property (readonly) NSMutableURLRequest *urlRequest;
@property (readonly) id<HMCameraClipDownloadAssetDataTaskHandling> handler;

- (void).cxx_destruct;
- (id)downloadDataForByteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithURL:(id)a0 httpHeaderFields:(id)a1;
- (id)initWithURL:(id)a0 httpHeaderFields:(id)a1 handler:(id)a2;

@end
