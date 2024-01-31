@class NSMutableIndexSet, CHDrawing;

@interface CHCornerDetector : NSObject {
    unsigned long long __strawSize;
    NSMutableIndexSet *__cornerIndexSet;
    NSMutableIndexSet *__directionChangeCornerIndexes;
    struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> { void *__value_; } __end_cap_; } __resampledDrawingPointMap;
}

@property (nonatomic) BOOL shouldUseDynamicSampling;
@property (nonatomic) double minimumSignificantSegmentLength;
@property (copy, nonatomic) CHDrawing *drawing;
@property (readonly, copy, nonatomic) CHDrawing *resampledDrawing;
@property (readonly, nonatomic) unsigned long long directionChangeCount;
@property (readonly, nonatomic) unsigned long long highestDirectionChangeCount;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cornerIndexes;
- (id)directionChangeCornerIndexes;

@end
