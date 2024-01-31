@class NSString, AVAudioSession;

@interface AVAudioIOController_iOS : NSObject <AVAudioIOController> {
    struct optional<(anonymous namespace)::IOControllerImpl> { union { char __null_state_; struct IOControllerImpl { AVAudioSession *mSession; BOOL mIsDecoupledInput; struct weak_ptr<as::client::XPCConnection> { struct XPCConnection *__ptr_; struct __shared_weak_count *__cntrl_; } mXPCConnection; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } mTimingStateSlot; struct synchronized<(anonymous namespace)::ListenerMgr, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ListenerMgr>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct ListenerMgr { struct IOControllerImpl *mOuter; struct vector<std::pair<long, void (^)(AVAudioIOControllerEvent)>, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<long, void (^)(AVAudioIOControllerEvent)> *, std::allocator<std::pair<long, void (^)(AVAudioIOControllerEvent)>>> { void *__value_; } __end_cap_; } mListeners; } mObject; } mListenerMgr; } __val_; } ; BOOL __engaged_; } impl;
    struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient *__ptr_; struct __shared_weak_count *__cntrl_; } _deviceTimeClient;
}

@property (readonly, nonatomic) struct AVAudioIOPeriod { double x0; double x1; unsigned long long x2; float x3; } IOPeriod;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) BOOL supportsDynamicLatency;
@property (readonly, nonatomic) struct AVAudioTimeInterval { double x0; double x1; unsigned long long x2; } dynamicLatency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; })currentTime;
- (struct AudioPresentationTimeStamp { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; double x7; double x8; })presentationTime;
- (long long)createIOEventBlock:(id /* block */)a0;
- (void)destroyIOEventBlock:(long long)a0;
- (id)initWithSession:(id)a0 xpcConnection:(struct shared_ptr<as::client::XPCConnection> { struct XPCConnection *x0; struct __shared_weak_count *x1; })a1 deviceTimeClient:(struct shared_ptr<as::client::DeviceTimeClient> { struct DeviceTimeClient *x0; struct __shared_weak_count *x1; })a2 timingSlot:(unsigned int)a3 isDecoupledInput:(BOOL)a4;
- (void)privateDispatchIOControllerEvent:(unsigned long long)a0;
- (void)setTimingSlot:(unsigned int)a0;

@end
