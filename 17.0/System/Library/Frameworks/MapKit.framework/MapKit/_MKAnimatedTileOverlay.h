@class NSNumber;

@interface _MKAnimatedTileOverlay : MKTileOverlay {
    NSNumber *_visibleKeyframeOverride;
}

@property (nonatomic) unsigned long long keyframesCount;
@property (nonatomic) double duration;
@property (nonatomic) BOOL shouldCrossfade;

- (void).cxx_destruct;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; double x3; })a0 keyframeIndex:(unsigned long long)a1;
- (void)cancelLoadingTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 keyframeIndex:(unsigned long long)a1;
- (id)initWithURLTemplate:(id)a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 keyframeIndex:(unsigned long long)a1 result:(id /* block */)a2;

@end
