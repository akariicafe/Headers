@interface _PASDispatch : NSObject

+ (void)waitForSemaphore:(id)a0 timeoutSeconds:(double)a1 onAcquire:(id /* block */)a2 onTimeout:(id /* block */)a3;
+ (void)waitForBlock:(id /* block */)a0 timeoutSeconds:(double)a1 onBlockComplete:(id /* block */)a2 onTimeout:(id /* block */)a3;
+ (id)autoreleasingSerialQueueWithLabel:(const char *)a0;
+ (void)notifyGroup:(id)a0 onQueue:(id)a1 withTimeout:(double)a2 block:(id /* block */)a3;
+ (unsigned char)waitForSemaphore:(id)a0 timeoutSeconds:(double)a1;
+ (unsigned char)waitForGroup:(id)a0 timeoutSeconds:(double)a1;
+ (void)waitForBlock:(id /* block */)a0;
+ (unsigned char)waitForBlock:(id /* block */)a0 timeoutSeconds:(double)a1;
+ (void)runAsyncOnQueue:(id)a0 afterDelaySeconds:(double)a1 block:(id /* block */)a2;
+ (void)waitForSemaphore:(id)a0;
+ (unsigned long long)dispatchTimeWithSecondsFromNow:(double)a0;
+ (void)waitForGroup:(id)a0 timeoutSeconds:(double)a1 onGroupComplete:(id /* block */)a2 onTimeout:(id /* block */)a3;
+ (void)waitForGroup:(id)a0;
+ (id)autoreleasingSerialQueueWithLabel:(const char *)a0 qosClass:(unsigned int)a1;
+ (void)runSyncOnMainThreadWithBlock:(id /* block */)a0;

@end
