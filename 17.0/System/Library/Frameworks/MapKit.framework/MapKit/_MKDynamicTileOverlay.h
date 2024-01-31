@class NSString;

@interface _MKDynamicTileOverlay : NSObject <_MKOverlayTileDataSource, MKOverlay>

@property (readonly, nonatomic, getter=_providerID) unsigned int providerID;
@property (nonatomic) long long minimumZ;
@property (nonatomic) long long maximumZ;
@property (readonly, getter=isGeometryFlipped) BOOL geometryFlipped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (id)init;
- (void)dealloc;
- (void)_cancelLoadingTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)cancelLoadingTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0;
- (void)loadTileAtPath:(struct { long long x0; long long x1; long long x2; double x3; })a0 result:(id /* block */)a1;

@end
