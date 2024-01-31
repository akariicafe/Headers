@class NSString, DownloadManager;

@interface SplunkSessionDelegate : NSObject <NSURLSessionDelegate>

@property (readonly, nonatomic) DownloadManager *downloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initWithDownloadManager:(id)a0;

@end
