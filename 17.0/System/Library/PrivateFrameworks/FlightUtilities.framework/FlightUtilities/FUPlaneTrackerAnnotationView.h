@class NSString, NSMutableArray;

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {
    BOOL _showsPlane;
}

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain) NSMutableArray *viewAddedBlock;
@property (nonatomic) double currentProgress;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } startLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } endLocation;
@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } currentLocation;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (id)defaultAnotation;

- (id)init;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)notifyWhenIsVisibleWithBlock:(id /* block */)a0;
- (id)planeLayer;
- (void)setPlaneImage:(id)a0;
- (void)setShowsPlane:(BOOL)a0;
- (void)setStartLatitude:(double)a0 startLongitude:(double)a1 endLatitude:(double)a2 endLongitude:(double)a3;

@end
