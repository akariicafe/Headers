@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface NFHWMonitor : NSObject <NFHardwareEventListener> {
    NSObject<OS_dispatch_semaphore> *sem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
