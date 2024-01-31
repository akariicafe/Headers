@class GEOMapRegion, GEOMapDataSubscriptionState;

@interface _GEOOfflineSubscriptionInfo : NSObject {
    GEOMapRegion *_region;
    GEOMapDataSubscriptionState *_state;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _rect;
}

- (void).cxx_destruct;

@end
