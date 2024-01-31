@class NSString;

@interface _ARSessionMetricsDefaultReporter : NSObject <ARSessionMetricsReporting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 dictionary:(id /* block */)a1;
- (void)postDarwinNotification:(id)a0;

@end
