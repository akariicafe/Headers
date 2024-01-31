@class VKRouteEtaDescription;

@interface VKRouteRangeAnnotationInfo : NSObject

@property (readonly, nonatomic) VKRouteEtaDescription *etaDescription;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } start;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } end;

- (long long)compare:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEtaDescription:(id)a0 start:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 end:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;

@end
