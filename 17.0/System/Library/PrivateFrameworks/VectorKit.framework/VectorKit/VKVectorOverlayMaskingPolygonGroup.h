@class NSArray;

@interface VKVectorOverlayMaskingPolygonGroup : VKVectorOverlayData

@property (readonly, nonatomic) NSArray *polygons;
@property (nonatomic) long long fillMode;
@property (nonatomic) long long style;

- (id)initWithPolygons:(id)a0;
- (void).cxx_destruct;

@end
