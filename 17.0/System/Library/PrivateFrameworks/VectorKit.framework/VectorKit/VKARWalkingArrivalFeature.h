@class NSArray, GEOARInfo, GEOFeatureStyleAttributes;

@interface VKARWalkingArrivalFeature : VKARWalkingFeature {
    GEOARInfo *_arInfo;
}

@property (readonly, nonatomic) NSArray *storeFronts;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_stringForAttributes;
- (id)initWithARInfo:(id)a0 undulationProvider:(id /* block */)a1 iconStyleAttributes:(id)a2;
- (id)initWithGeocentricPosition:(struct Geocentric<double> { double x0[3]; })a0 iconStyleAttributes:(id)a1;
- (id)initWithPosition:(struct { double x0; double x1; double x2; })a0 iconStyleAttributes:(id)a1;
- (id)initWithStoreFront:(id)a0 iconStyleAttributes:(id)a1;
- (id)initWithStoreFronts:(id)a0 iconStyleAttributes:(id)a1;

@end
