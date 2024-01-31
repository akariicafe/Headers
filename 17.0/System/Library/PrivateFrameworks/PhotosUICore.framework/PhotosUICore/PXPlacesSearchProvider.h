@class PXPlacesSnapshotFactory, NSObject;
@protocol OS_dispatch_queue;

@interface PXPlacesSearchProvider : NSObject

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)_extendedTraitCollectionForTraitCollection:(id)a0;
+ (id)_placesSnapshotOptionsForSize:(struct CGSize { double x0; double x1; })a0 extendedTraitCollection:(id)a1 serialQueue:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)requestBoundingRegionForQuery:(id)a0 completion:(id /* block */)a1;
- (void)requestMapSnapshotForQuery:(id)a0 size:(struct CGSize { double x0; double x1; })a1 traitCollectionForSnapshot:(id)a2 completion:(id /* block */)a3;
- (void)requestMapSnapshotOfRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1 traitCollectionForSnapshot:(id)a2 completion:(id /* block */)a3;

@end
