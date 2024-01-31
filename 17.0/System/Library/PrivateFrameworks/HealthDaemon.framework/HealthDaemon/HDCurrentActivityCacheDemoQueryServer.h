@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (void)_queue_start;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)shouldObserveActivityCache;

@end
