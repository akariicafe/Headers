@interface WeatherMaps.MapKitDynamicTileOverlayRenderer : _MKDynamicTileOverlayRenderer {
    void /* unknown type, empty encoding */ dynamicOverlay;
    void /* unknown type, empty encoding */ overlayRenderer;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ defaultFramerate;
    void /* unknown type, empty encoding */ renderTimer;
    void /* unknown type, empty encoding */ previousVisibleTiles;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ ioSurfaceRefCache;
    void /* unknown type, empty encoding */ fallbackBehaviourEnabled;
    void /* unknown type, empty encoding */ useIOSurfaceCache;
    void /* unknown type, empty encoding */ animationPosition;
    void /* unknown type, empty encoding */ isPlaying;
}

@property (nonatomic, readonly) BOOL fallbackEnabled;

- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0;
- (BOOL)canDrawKey:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1;
- (void)didExitTile:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)drawTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 withTile:(id)a1 inIOSurface:(struct __IOSurface { } *)a2 withTimestamp:(double)a3;
- (long long)estimatedCostForTile:(id)a0;
- (id)initWithTileOverlay:(id)a0;
- (BOOL)isFallbackEnabled;
- (void)onVisibleTiles:(const struct { long long x0; long long x1; long long x2; double x3; } *)a0 count:(long long)a1;

@end
