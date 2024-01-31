@class NSMutableArray, GEOTileKeyList, NSMutableSet;
@protocol GEOMapServiceTicket;

@interface _GEOTransitPreloadBatch : NSObject {
    unsigned long long status;
    unsigned long long generation;
    unsigned long long errCount;
    unsigned long long bytesLoaded;
    unsigned long long bytesLoadedFromNetwork;
    double startTime;
    double endTime;
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { struct *__begin_; struct *__end_; struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { struct *__value_; } __end_cap_; } coords;
    NSMutableArray *_latLngToLoad;
    unsigned int priority;
    id<GEOMapServiceTicket> placeDataRequestTicketForBatch;
    double endTimeForScheduleFreshness;
}

@property (retain, nonatomic) GEOTileKeyList *tilesToLoad;
@property (retain, nonatomic) NSMutableSet *placeDatasToLoad;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)networkDataRateKB;

@end
