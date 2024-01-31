@class NSArray, GEOVectorTile, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuilding : NSObject {
    GEOVectorTile *_tile;
    GEOBuildingFootprintFeature *_feature;
}

@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) unsigned long long buildingID;
@property (readonly, nonatomic) int tileSetStyle;
@property (readonly, nonatomic) BOOL hasTerrainElevation;
@property (readonly, nonatomic) unsigned long long materialID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaVinciTile:(id)a0 buildingIndex:(unsigned long long)a1;
- (id)initWithFeature:(id)a0;

@end
