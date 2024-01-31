@class PNPetPromoter;

@interface PNPetPromoterWrapper : NSObject {
    PNPetPromoter *_petPromoter;
}

+ (unsigned long long)minimumNumberOfFacesNeededForPromotion;
+ (void)promoteUnverifiedPetsInPhotoLibrary:(id)a0 withUpdateBlock:(id /* block */)a1;
+ (id)statusWithLibrary:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0 andDelegate:(id)a1;
- (void)promoteUnverifiedPetsWithUpdateBlock:(id /* block */)a0;

@end
