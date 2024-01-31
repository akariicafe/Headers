@class NSObject;
@protocol OS_dispatch_queue;

@interface MTMediaContentSourceiOSMusicLibrary : MTMediaContentSource

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) BOOL iTunesMatchEnabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)determineiTunesMatchEnabledWithCompletion:(id /* block */)a0;

@end
