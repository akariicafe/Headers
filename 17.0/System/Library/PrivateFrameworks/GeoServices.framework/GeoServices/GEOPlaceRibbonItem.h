@class GEOFactoidRibbonItem, GEOAmenityRibbonItem;

@interface GEOPlaceRibbonItem : NSObject

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOFactoidRibbonItem *factoidItem;
@property (readonly, nonatomic) GEOAmenityRibbonItem *amenityItem;

- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (id)initAmenityWithAmenityItem:(id)a0;
- (id)initWithFactoidRibbonItem:(id)a0;

@end
