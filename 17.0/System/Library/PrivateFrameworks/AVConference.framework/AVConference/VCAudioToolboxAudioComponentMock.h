@interface VCAudioToolboxAudioComponentMock : NSObject <VCAudioToolboxAudioComponentMockCallbacks> {
    BOOL _isMockingEnabled;
}

+ (id)sharedInstance;

- (void)start;
- (void)stop;
- (BOOL)copyName:(struct OpaqueAudioComponent { } *)a0 outName:(const struct __CFString **)a1 outStatus:(int *)a2;
- (BOOL)findNextComponent:(struct OpaqueAudioComponent { } *)a0 description:(const struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1 outComponent:(struct OpaqueAudioComponent **)a2;
- (BOOL)getVersion:(struct OpaqueAudioComponent { } *)a0 outVersion:(unsigned int *)a1 outStatus:(int *)a2;
- (BOOL)instanceDispose:(struct OpaqueAudioComponentInstance { } *)a0 outStatus:(int *)a1;
- (BOOL)instanceNew:(struct OpaqueAudioComponent { } *)a0 outInstance:(struct OpaqueAudioComponentInstance **)a1 outStatus:(int *)a2;

@end
