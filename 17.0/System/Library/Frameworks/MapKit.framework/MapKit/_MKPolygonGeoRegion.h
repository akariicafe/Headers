@class NSString;

@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {
    struct CLLocationCoordinate2D { double x0; double x1; } *_polygon;
    unsigned long long _vertexCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
