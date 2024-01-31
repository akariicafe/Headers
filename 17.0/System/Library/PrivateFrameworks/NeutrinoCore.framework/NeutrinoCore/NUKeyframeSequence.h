@interface NUKeyframeSequence : NSObject {
    unsigned long long _count;
    struct { long long x0; int x1; unsigned int x2; long long x3; } *_times;
    BOOL _ownsTimes;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long interpolation;

- (id)init;
- (void)dealloc;
- (id)sparseSequence;
- (long long)indexOfKeyframeAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithInterpolation:(long long)a0 count:(unsigned long long)a1 times:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (id)initWithKeyframeSequence:(id)a0;
- (void /* unknown type, empty encoding */)interpolantAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeOfKeyframeAtIndex:(long long)a0;

@end
