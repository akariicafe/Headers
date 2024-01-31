@class GEOVectorTile, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuildingSection : NSObject {
    GEOVectorTile *_tile;
    struct { double x0; double x1; } *_coordinates;
    unsigned long long _coordinateCount;
    GEOBuildingFootprintFeature *_feature;
    unsigned long long _sectionIndex;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double baseHeight;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double terrainElevation;
@property (readonly, nonatomic) double topHeight;
@property (readonly, nonatomic) double minBaseHeight;
@property (readonly, nonatomic) double maxBaseHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaVinciTile:(id)a0 buildingIndex:(unsigned long long)a1 sectionIndex:(unsigned long long)a2;
- (id)initWithFeature:(id)a0 sectionIndex:(unsigned long long)a1;

@end
