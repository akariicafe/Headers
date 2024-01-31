@protocol WatchQuickActionHostObserver;

@interface _WQA_HostDeallocNotifier : NSObject

@property (weak, nonatomic) id<WatchQuickActionHostObserver> hostObserver;

- (void)dealloc;
- (void).cxx_destruct;

@end
