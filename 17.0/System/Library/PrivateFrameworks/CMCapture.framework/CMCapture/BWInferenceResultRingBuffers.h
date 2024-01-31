@class NSMutableDictionary;

@interface BWInferenceResultRingBuffers : NSObject {
    struct OpaqueFigSimpleMutex { } *_lock;
    NSMutableDictionary *_rings;
}

- (id)init;
- (void)dealloc;
- (void)bufferingStatsForType:(int)a0 firstOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 lastOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 countOut:(int *)a3;
- (void)insertInferenceResultsFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)retrieveInferencesForType:(int)a0 beginning:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setupRingBuffer:(int)a0 inferencesOfType:(int)a1;

@end
