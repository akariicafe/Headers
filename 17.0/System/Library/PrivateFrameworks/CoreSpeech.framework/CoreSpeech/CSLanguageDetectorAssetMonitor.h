@class NSObject;
@protocol OS_dispatch_queue, CSLanguageDetectorAssetMonitorDelegate;

@interface CSLanguageDetectorAssetMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id<CSLanguageDetectorAssetMonitorDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_supportedLocale:(id /* block */)a0;
- (void)startMonitor;
- (void)supportedLocale:(id /* block */)a0;

@end
