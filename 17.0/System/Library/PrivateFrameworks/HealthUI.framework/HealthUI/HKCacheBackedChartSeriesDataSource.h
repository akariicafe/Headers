@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {
    struct HKGraphSeriesDataBlockPath { long long index; long long zoom; long long resolution; } _lastStartPath;
    struct HKGraphSeriesDataBlockPath { long long index; long long zoom; long long resolution; } _lastEndPath;
}

@property (retain, nonatomic) HKChartCache *chartCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 context:(id)a1;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 toPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 priorityDelegate:(id)a2;
- (void)chartCacheDidUpdate:(id)a0;
- (BOOL)hasAllBlocksAvailableBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
- (BOOL)hasAvailableBlocksBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
- (BOOL)hasPendingQueriesBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;

@end
