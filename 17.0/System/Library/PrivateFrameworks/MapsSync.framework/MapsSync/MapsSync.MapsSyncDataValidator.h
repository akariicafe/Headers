@interface MapsSync.MapsSyncDataValidator : NSObject

+ (BOOL)doesMapItemExistInCollectionWithMapItem:(id)a0 collection:(id)a1;
+ (BOOL)doesMapItemExistInPlacesWithMapItem:(id)a0 session:(id)a1;
+ (id)findMapItemInPlacesWithMapItem:(id)a0 session:(id)a1;
+ (id)findPlaceInCollectionWithMapItem:(id)a0 collection:(id)a1;

- (id)init;

@end
