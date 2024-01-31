@class NSURL;

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { struct AvailabilityTile *__ptr_; struct __shared_weak_count *__cntrl_; } _avlTile;
}

@property (readonly, nonatomic) NSURL *path;

+ (BOOL)generateAvlTileFromJSON:(id)a0 atPath:(id)a1;
+ (void)_setParamOverrides:(void *)a0 fromDict:(id)a1;

- (BOOL)tileIsOpenForIncrementalIO;
- (int)numTotalExpectedExteriorsInVenues;
- (id)init;
- (void *)getAvlTile;
- (id).cxx_construct;
- (BOOL)_openTileFileForIncrementalIO;
- (int)numVenuesExpected;
- (id)initWithEmptyTile;
- (void).cxx_destruct;
- (id)initWithTilePathIncrementalIO:(id)a0;
- (BOOL)getNextVenueBoundsIncrementally:(void *)a0;
- (unsigned long long)venuesCount;

@end
