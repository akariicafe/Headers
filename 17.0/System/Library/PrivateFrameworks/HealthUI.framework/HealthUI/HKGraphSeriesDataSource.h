@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject

@property (weak, nonatomic) id<HKGraphSeriesDataSourceDelegate> delegate;
@property (nonatomic) long long minimumZoom;
@property (nonatomic) long long maximumZoom;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 context:(id)a1;
- (struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })blockPathForX:(id)a0 zoom:(long long)a1 resolution:(long long)a2;
- (void)blocksRequestedFromPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 toPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 priorityDelegate:(id)a2;
- (BOOL)hasAllBlocksAvailableBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
- (BOOL)hasAvailableBlocksBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;
- (BOOL)hasPendingQueriesBetweenStartPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a0 endPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1;

@end
