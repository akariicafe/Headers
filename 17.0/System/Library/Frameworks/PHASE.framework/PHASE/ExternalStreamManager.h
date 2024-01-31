@class AVAudioFormat, NSMutableDictionary;

@interface ExternalStreamManager : NSObject {
    NSMutableDictionary *_streamGroups;
    void *_taskManager;
    AVAudioFormat *_engineFormat;
    unsigned int _maximumFramesToRender;
    BOOL _enableAudioIssueDetector;
    struct ExternalStreamSessionCommandExecutor { void /* function */ **_vptr$ICommandable; void *mCommandQueues; int mQueueCount; struct log_category *mLogCategory; struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } mIsOverflowing; } _sessionCommandExecutor;
    struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } _controllerPauseStateCallbacks;
    unsigned long long _controllerPauseStateCallbackCounter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_setPauseExternalInputStreamWithoutNotifyingClient:(id)a0 isPaused:(BOOL)a1 error:(id *)a2;
- (void)abandonControlOfExternalStreamGroupID:(id)a0 withCallback:(id /* block */)a1;
- (unsigned long long)addControllerPauseStateDidUpdateCallback:(id /* block */)a0;
- (BOOL)addExternalInputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 isPaused:(BOOL)a4 canRecord:(BOOL)a5 fader:(struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> { void *x0; struct __shared_weak_count *x1; })a6 pauseStateDidUpdateCallback:(id /* block */)a7 error:(id *)a8;
- (void)addExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 attributedTo:(id)a2 definition:(id)a3 startsPaused:(BOOL)a4 renderBlock:(id /* block */)a5 withCallback:(id /* block */)a6;
- (void)claimControlOfExternalStreamGroupID:(id)a0 attributedTo:(id)a1 stateChangeBlock:(id /* block */)a2 withCallback:(id /* block */)a3;
- (struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> { struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> { struct StreamRenderer *x0; } x0; })createRendererForStream:(id)a0 outputChannelLayout:(unsigned int)a1 normalize:(BOOL)a2 targetLKFS:(double)a3 error:(id *)a4;
- (void)executeSessionCommands;
- (id)formatForStream:(id)a0 error:(id *)a1;
- (void)gatherDebugInformation:(id /* block */)a0;
- (id)initWithTaskManager:(void *)a0 engineMode:(long long)a1 engineFormat:(id)a2 maximumFramesToRender:(unsigned int)a3 enableAudioIssueDetector:(BOOL)a4;
- (void)removeAllResourcesAttributedToClientID:(id)a0;
- (void)removeControllerPauseStateDidUpdateCallback:(unsigned long long)a0;
- (void)removeExternalInputStreamGroupID:(id)a0 streamID:(id)a1;
- (void)removeExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 withCallback:(id /* block */)a2;
- (unsigned int)sessionIdForStream:(id)a0 error:(id *)a1;
- (void)setExternalInputStreamSession:(unsigned int)a0 isActive:(BOOL)a1;
- (unsigned long long)setExternalInputStreamSessionMute:(unsigned int)a0 isMuted:(BOOL)a1 fadeTimeInSeconds:(float)a2;
- (void)setMuteExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isMuted:(BOOL)a2;
- (BOOL)setPauseExternalInputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2 error:(id *)a3;
- (BOOL)setPauseExternalOutputStreamGroupID:(id)a0 streamID:(id)a1 isPaused:(BOOL)a2 error:(id *)a3;
- (BOOL)streamIsPaused:(id)a0 error:(id *)a1;
- (long long)typeForStream:(id)a0 error:(id *)a1;
- (void)updateController:(id)a0 pauseState:(BOOL)a1;
- (void)updateExternalInputStreamRecordingAbility:(id)a0 streamID:(id)a1 canRecord:(BOOL)a2;

@end
