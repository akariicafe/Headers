@interface HKAudiogramAverageSensitivityDataSource : HKGraphSeriesDataSource {
    void /* unknown type, empty encoding */ dataBlock;
}

- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 context:(id)a1;
- (struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })blockPathForX:(id)a0 zoom:(long long)a1 resolution:(long long)a2;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 toPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 priorityDelegate:(id)a2;
- (id)initWithAverageSensitivityPoint:(id)a0 isLeftEar:(BOOL)a1;

@end
