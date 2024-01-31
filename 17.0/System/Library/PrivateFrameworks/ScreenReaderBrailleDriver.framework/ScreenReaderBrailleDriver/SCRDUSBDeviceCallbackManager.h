@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCRDUSBDeviceCallbackManager : NSObject {
    NSMutableDictionary *_completions;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (id)init;
- (void)addCompletion:(struct _SCRDUSBDeviceCompletion { unsigned long long x0; int x1; } *)a0;
- (void).cxx_destruct;
- (struct _SCRDUSBDeviceCompletion { unsigned long long x0; int x1; } *)completionWithReference:(void *)a0;
- (void)removeCompletion:(void *)a0;

@end
