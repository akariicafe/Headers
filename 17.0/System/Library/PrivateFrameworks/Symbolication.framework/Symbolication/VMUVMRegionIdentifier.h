@class NSArray, VMUTask, VMUTaskThreadStates, NSMapTable, NSMutableArray;

@interface VMUVMRegionIdentifier : NSObject {
    VMUTask *_task;
    VMUTaskThreadStates *_threadStates;
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
    BOOL _hasFractionalPageSizes;
}

@property (readonly, nonatomic) NSArray *zoneNames;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } summaryStatisticsOfAllZones;

+ (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 inSortedRegions:(id)a1 options:(unsigned long long)a2;

- (id)regions;
- (void)_computeStatistics:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *)a0;
- (id)init;
- (BOOL)hasFractionalPageSizes;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)a0;
- (id)initWithTask:(unsigned int)a0;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)a0 options:(unsigned long long)a1 maximumLength:(unsigned long long)a2 memorySizeDivisor:(unsigned int)a3;
- (int)_recordRegionsAroundAddress:(unsigned long long)a0 regionDescriptionOptions:(unsigned long long)a1;
- (id)initWithGraph:(id)a0 options:(unsigned long long)a1;
- (id)taskThreadStates;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })computedStatisticsForZoneWithName:(id)a0;
- (id)initWithTask:(unsigned int)a0 pid:(int)a1 options:(unsigned long long)a2;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)a0 memorySizeDivisor:(unsigned int)a1;
- (void).cxx_destruct;
- (id)nonSubmapRegionContainingAddress:(unsigned long long)a0;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1;
- (id)initWithTask:(unsigned int)a0 options:(unsigned long long)a1;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)a0 memorySizeDivisor:(unsigned int)a1;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithVMUTask:(id)a0 options:(unsigned long long)a1;

@end
