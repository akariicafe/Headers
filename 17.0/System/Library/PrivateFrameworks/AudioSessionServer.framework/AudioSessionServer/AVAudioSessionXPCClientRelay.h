@class NSXPCConnection;
@protocol SessionManagerXPCServerCallbackProtocol;

@interface AVAudioSessionXPCClientRelay : NSObject {
    struct synchronized<as::server::DeferredMessageState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<as::server::DeferredMessageState>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct DeferredMessageState { BOOL mMessagePending; unsigned int mDeferredMessageCount; id<SessionManagerXPCServerCallbackProtocol> proxy; struct ProcessToken { unsigned int mValue; } mToken; struct vector<as::server::DeferredMessageState::EventType, std::allocator<as::server::DeferredMessageState::EventType>> { int *__begin_; int *__end_; struct __compressed_pair<as::server::DeferredMessageState::EventType *, std::allocator<as::server::DeferredMessageState::EventType>> { int *__value_; } __end_cap_; } mFIFO; struct optional<as::server::ConfigChangeSummary> { union { char __null_state_; struct ConfigChangeSummary { void /* function */ **_vptr$Base; struct vector<std::unique_ptr<as::server::SessionUpdateSummary>, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unique_ptr<as::server::SessionUpdateSummary> *, std::allocator<std::unique_ptr<as::server::SessionUpdateSummary>>> { void *__value_; } __end_cap_; } _sessionChanges; struct unique_ptr<as::server::ChangedObject, std::default_delete<as::server::ChangedObject>> { struct __compressed_pair<as::server::ChangedObject *, std::default_delete<as::server::ChangedObject>> { struct ChangedObject *__value_; } __ptr_; } _hardwareSystemChange; } __val_; } ; BOOL __engaged_; } mDeferredConfigChange; struct vector<as::RouteIdentifier, std::allocator<as::RouteIdentifier>> { struct RouteIdentifier *__begin_; struct RouteIdentifier *__end_; struct __compressed_pair<as::RouteIdentifier *, std::allocator<as::RouteIdentifier>> { struct RouteIdentifier *__value_; } __end_cap_; } mDeferredDefaultRouteChanges; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } mDeferredStopForAppStateChange; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } mDeferredNeedsStateSync; struct vector<std::pair<unsigned int, NSDictionary *>, std::allocator<std::pair<unsigned int, NSDictionary *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned int, NSDictionary *> *, std::allocator<std::pair<unsigned int, NSDictionary *>>> { void *__value_; } __end_cap_; } mDeferredInterruptions; struct vector<std::pair<unsigned int, bool>, std::allocator<std::pair<unsigned int, bool>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned int, bool> *, std::allocator<std::pair<unsigned int, bool>>> { void *__value_; } __end_cap_; } mDeferredHasProxies; struct vector<as::server::ControlValue, std::allocator<as::server::ControlValue>> { struct ControlValue *__begin_; struct ControlValue *__end_; struct __compressed_pair<as::server::ControlValue *, std::allocator<as::server::ControlValue>> { struct ControlValue *__value_; } __end_cap_; } mDeferredControlValueChanges; } mObject; } guarded_impl;
    NSXPCConnection *connection;
    struct ProcessToken { unsigned int mValue; } token;
}

- (id)initWithConnection:(id)a0 token:(struct ProcessToken { unsigned int x0; })a1;
- (void)sendInterruptionMessageForSession:(unsigned int)a0 userInfo:(id)a1;
- (void)sendSession:(unsigned int)a0 hasProxies:(BOOL)a1;
- (void)sendDeferredMessages;
- (id).cxx_construct;
- (void)sendServerConfigurationChange:(const void *)a0;
- (void)sendSessionNeedsStateSync:(unsigned int)a0;
- (void)sendSessionStoppedForAppStateChange:(unsigned int)a0;
- (void)setBarrierBlock;
- (void).cxx_destruct;
- (void)sendControlValueChanged:(const void *)a0;
- (void)sendServerDefaultRouteChange:(const void *)a0;

@end
