@class NSString, GEOFeatureStyleAttributes;

@interface VKMarker : NSObject {
    struct shared_ptr<md::Marker> { struct Marker *__ptr_; struct __shared_weak_count *__cntrl_; } _actualMarker;
    GEOFeatureStyleAttributes *_styleAttributes;
}

@property (readonly) const void *actualMarker;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) unsigned long long venueID;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) int markerType;

+ (id)markerWithFeatureMarker:(const void *)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureHandles;
- (id)initWithFeatureMarkerPtr:(const void *)a0 markerType:(int)a1;

@end
