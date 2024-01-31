@class NSArray;

@interface STFileProviderMonitor : NSObject

@property (retain) id fpContext;
@property (retain) NSArray *fpDomains;

+ (id)sharedMonitor;

- (void)sync;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)_postNotify:(id)a0;
- (void)postNotify;
- (void)stopMonitor;

@end
