@class NSString;

@interface AVAudioTimeObserverImpl : NSObject <AVAudioTimeObserver> {
    struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient *__ptr_; struct __shared_weak_count *__cntrl_; } _deviceTimeClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentTime;
- (struct AudioPresentationTimeStamp { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; double x7; double x8; })currentPresentationTime;
- (struct AVAudioTimeInterval { double x0; double x1; unsigned long long x2; })currentLatency;
- (struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient *x0; struct __shared_weak_count *x1; })deviceTimeClient;
- (id)initWithDeviceTimeClient:(struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isLatencyDynamic;

@end
