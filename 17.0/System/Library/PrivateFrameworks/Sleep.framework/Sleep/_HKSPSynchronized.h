@class NSString;

@interface _HKSPSynchronized : NSObject <HKSPMutexProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlock:(id /* block */)a0;

@end
