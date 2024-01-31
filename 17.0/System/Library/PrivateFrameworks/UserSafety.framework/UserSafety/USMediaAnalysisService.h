@class MADService;

@interface USMediaAnalysisService : NSObject

@property (retain, nonatomic) MADService *service;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)isSensitiveCGImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (id)_newImageClassificationRequest;
- (id)_newVideoClassificationRequest;
- (id)_processMADResults:(BOOL *)a0 requestID:(int)a1 error:(id)a2 request:(id)a3;
- (id)_processMADResults:(BOOL *)a0 requestID:(int)a1 error:(id)a2 videoRequest:(id)a3;
- (id)initWithMADService:(id)a0;
- (void)isSensitiveImage:(id)a0 completionHandler:(id /* block */)a1;
- (void)isSensitiveImageWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)isSensitiveVideoFile:(id)a0 useBlastdoor:(BOOL)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)isSensitiveVideoWithLocalIdentifier:(id)a0 fromPhotoLibraryWithURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
