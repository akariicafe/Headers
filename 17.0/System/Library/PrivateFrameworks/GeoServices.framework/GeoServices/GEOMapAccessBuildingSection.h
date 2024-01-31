@class NSString;

@interface GEOMapAccessBuildingSection : NSObject <GEOMapBuildingSection> {
    unsigned long long _sectionIndex;
}

@property (readonly, nonatomic) struct { double latitude; double longitude; } centerCoordinate;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double baseHeight;
@property (readonly, nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFeature:(id)a0 sectionIndex:(unsigned long long)a1;

@end
