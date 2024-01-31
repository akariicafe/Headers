@class MTLDebugBuffer;

@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLDebugBuffer *_debugBuffer;
}

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)dealloc;
- (id)buffer;
- (id)description;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 heap:(id)a2;
- (BOOL)purgeableStateValidForRendering;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;

@end
