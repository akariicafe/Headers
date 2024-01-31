@class VKCImageAnalyzer, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface DCImageAnalyzerManager : NSObject {
    VKCImageAnalyzer *_imageAnalyzer;
    NSCache *_cachedAnalyses;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)sharedInstance;
+ (BOOL)isImageAnalysisEnabled;

- (id)init;
- (void)cleanup;
- (void).cxx_destruct;
- (void)analysisForImage:(id)a0 completionHandler:(id /* block */)a1;

@end
