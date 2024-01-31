@class NSFileProviderManager;

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver>

@property (weak) NSFileProviderManager *parentConnection;

- (void)observePresentedFilesDidChange:(id)a0;
- (void).cxx_destruct;

@end
