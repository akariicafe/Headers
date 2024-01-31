@class GEOObserverHashTable, NSString, MKMapView, GEOMapDataSubscriptionManager, MKMultiPolygon, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface _MKOfflineRegionsOverlayManager : NSObject <MKOverlayDrawableProvider, VKCustomFeatureDataSource> {
    NSString *_offlineCohortId;
    NSObject<OS_dispatch_queue> *_queue;
    GEOMapDataSubscriptionManager *_subscriptionsManager;
    MKMultiPolygon *_currentOverlay;
    NSArray *_currentCustomFeatures;
    int _fullyLoadedSubscriptionsChangedNotifyToken;
    int _subscriptionsChangedNotifyToken;
    GEOObserverHashTable *_customFeatureDataSourceObservers;
}

@property (readonly, weak, nonatomic) MKMapView *mapView;
@property (nonatomic) long long visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (id)clusterStyleAttributes;
- (BOOL)isClusteringEnabled;
- (id)globalAnnotations;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (id)annotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)_update;
- (unsigned char)featureType;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (unsigned char)sceneState;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (unsigned char)sceneID;
- (void)_setOverlay:(id)a0 customFeatures:(id)a1;
- (id)createDrawableForOverlay:(id)a0;
- (id)initWithMapView:(id)a0;

@end
