@class PXPlacesMapController, PKExtendedTraitCollection, NSString;

@interface PXPhotosMapControllerAccessor : NSObject <PXPlacesMapControllerAccess>

@property (readonly, nonatomic) PXPlacesMapController *mapController;
@property (readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapController:(id)a0 traitCollection:(id)a1;

@end
