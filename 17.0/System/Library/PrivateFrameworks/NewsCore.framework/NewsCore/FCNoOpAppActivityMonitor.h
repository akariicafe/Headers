@class NSString;

@interface FCNoOpAppActivityMonitor : NSObject <FCAppActivityMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
