@interface AVAudioSessionManager : NSObject {
    struct synchronized<(anonymous namespace)::ManagerState, caulk::mach::unfair_lock, caulk::empty_atomic_interface<(anonymous namespace)::ManagerState>> { struct unfair_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } mMutex; struct ManagerState { struct circular_buffer<int, std::allocator<int>> { int *m_buff; int *m_end; int *m_first; int *m_last; unsigned long long m_size; } mServerPIDs; } mObject; } _state;
}

@property (readonly, nonatomic, getter=isProcessAudioMuted) BOOL processAudioMuted;

+ (id)defaultManager;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)triggerMediaServicesResetNotifications:(int)a0 daemonName:(id)a1;
- (BOOL)trackDaemonPID:(int)a0;

@end
