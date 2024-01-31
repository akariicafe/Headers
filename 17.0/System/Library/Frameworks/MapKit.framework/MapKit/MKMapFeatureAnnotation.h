@class NSString, VKLabelMarker, MKIconStyle;

@interface MKMapFeatureAnnotation : NSObject <MKAnnotation> {
    BOOL _isHybridMap;
}

@property (readonly, nonatomic) VKLabelMarker *marker;
@property (readonly, nonatomic) long long featureType;
@property (readonly, nonatomic) MKIconStyle *iconStyle;
@property (readonly, nonatomic) NSString *pointOfInterestCategory;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setProperties;
- (id)initWithVKLabelMarker:(id)a0 isHybridMap:(BOOL)a1;

@end
