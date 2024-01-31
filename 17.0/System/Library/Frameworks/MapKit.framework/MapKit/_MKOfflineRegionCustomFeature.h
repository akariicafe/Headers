@class NSString, VKCustomFeature, GEOMapDataSubscription;

@interface _MKOfflineRegionCustomFeature : NSObject <VKCustomFeatureAnnotation> {
    GEOMapDataSubscription *_subscription;
    VKCustomFeature *_feature;
}

@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double course;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)feature;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscription:(id)a0;

@end
