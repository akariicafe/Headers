@class NSMutableDictionary, DYPlaybackEngine;

@interface DYMTLDebugPlaybackEngineCounterSupport : NSObject {
    struct vector<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { void *__value_; } __end_cap_; } _commandBufferFrameProfilesInfo;
    struct vector<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> *, std::allocator<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>>> { void *__value_; } __end_cap_; } _commandBufferFrameProfilesPerDMDrawCallInfo;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } _commandBufferFrameProfiles;
    NSMutableDictionary *_frameProfiling;
    DYPlaybackEngine *_engine;
    BOOL _needsMultiplePasses;
    unsigned int _loopCount;
    BOOL _isAGXDevice;
}

- (id)initWithPlaybackEngine:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)availableCounters;
- (id)derivedCounterData;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)a0 setConsistentState:(unsigned int)a1;
- (BOOL)_FixSplitEncoderSamples:(void *)a0 forProfile:(const void *)a1 withInfo:(id)a2 andUpdatedCounterInfo:(id)a3;
- (BOOL)_computeAverageForFrameProfile:(void *)a0 forProfile:(const void *)a1 withInfo:(id)a2 andUpdatedCounterInfo:(id)a3 forEncoders:(BOOL)a4;
- (void)_clearData;
- (unsigned long long)_profileFrameForFrameTiming:(id)a0 atConsistentState:(unsigned int)a1;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)a0;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)a0 encoderPass:(BOOL)a1;
- (id)_profileFrameWithCounterListsForProfileInfoAsync:(id)a0 encoderPass:(BOOL)a1 updateStatSampling:(BOOL)a2 setConsistentState:(unsigned int)a3;
- (id)_profileSplitEncodersForProfileInfo:(id)a0;
- (id)_runPassesForCounterLists:(id)a0 encoderPass:(BOOL)a1 frameProfileInfo:(void *)a2;
- (void)_setupPState;
- (id)_updatedBatchInfos:(id)a0 fromPerEncoderDrawCallCount:(id)a1;
- (void)addCommandBufferFrameProfile:(const void *)a0;
- (void)addCounters:(id)a0;
- (void)createBatchIdFilterMapping;
- (id)profileEncodersForProfileInfo:(id)a0;
- (id)profileFrameWithCounterListsForProfileInfo:(id)a0;
- (id)profileFrameWithCounterListsForProfileInfoAsync:(id)a0;
- (id)profileFrameWithPayload:(id)a0;

@end
