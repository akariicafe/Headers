@class NSString;
@protocol _WSWebSheetDownloadDelegate;

@interface WSWebSheetDownloadManager : NSObject <_WKDownloadDelegate>

@property (readonly, nonatomic) NSString *fileDownloadPath;
@property (nonatomic) id<_WSWebSheetDownloadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)removeFromDisk;
- (void)_download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1 completionHandler:(id /* block */)a2;
- (void)_download:(id)a0 didFailWithError:(id)a1;
- (void)_download:(id)a0 didReceiveData:(unsigned long long)a1;
- (void)_download:(id)a0 didReceiveResponse:(id)a1;
- (void)_downloadDidFinish:(id)a0;
- (void)_downloadDidStart:(id)a0;

@end
