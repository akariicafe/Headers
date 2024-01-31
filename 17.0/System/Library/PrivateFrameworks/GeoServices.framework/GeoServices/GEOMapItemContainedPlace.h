@class NSArray, GEOPDContainedPlace;
@protocol GEOMapItem;

@interface GEOMapItemContainedPlace : NSObject {
    GEOPDContainedPlace *_containedPlace;
    id<GEOMapItem> _parent;
    NSArray *_children;
    NSArray *_siblings;
}

@property (readonly, nonatomic) unsigned long long featureId;
@property (readonly, nonatomic) unsigned long long parentFeatureId;
@property (readonly, nonatomic) id<GEOMapItem> parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *siblings;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContainedPlace:(id)a0;

@end
