@class NSArray, NSNumber;

@interface GEOEnhancedPlacement : NSObject

@property (readonly, nonatomic) NSArray *buildingIds;
@property (readonly, nonatomic) NSNumber *elevationInMeters;
@property (readonly, nonatomic) NSNumber *buildingHeightInMeters;
@property (readonly, nonatomic) NSNumber *buildingFaceAzimuth;

- (void).cxx_destruct;
- (id)initWithGEOPDEnhancedPlacement:(id)a0;
- (id)initWithBuildingIds:(id)a0 elevationInMeters:(id)a1 buildingHeightInMeters:(id)a2 buildingFaceAzimuth:(id)a3;

@end
