@class NSString, NSArray;

@interface MKClusterAnnotation : NSObject <MKAnnotation> {
    struct { unsigned char hasCoordinate : 1; unsigned char hasTitle : 1; unsigned char hasSubtitle : 1; } _flags;
}

@property (copy, nonatomic) NSString *clusteringIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSArray *memberAnnotations;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_averageCoordinate;
- (BOOL)_isMKClusterAnnotation;
- (void)_memberAnnotationCoordinateDidChange;
- (id)initWithMemberAnnotations:(id)a0;

@end
