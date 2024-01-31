@interface PLPhotoEditPersistenceManager : NSObject

+ (BOOL)validateAdjustmentData:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2 error:(id *)a3;
+ (unsigned int)renderTypeForAdjustmentData:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2;

- (id)debugDescriptionForAdjustmentData:(id)a0;
- (id)debugDescriptionForPhotoEditData:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2;
- (void)loadMasterDimensionsFromPhotoEditData:(id)a0 outMasterWidth:(long long *)a1 outMasterHeight:(long long *)a2;
- (id)loadPhotoEditData:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2 importProperties:(id)a3 error:(id *)a4;
- (id)dataFromCompositionController:(id)a0 outFormatIdentifier:(id *)a1 outFormatVersion:(id *)a2 exportProperties:(id)a3;
- (id)loadCompositionFrom:(id)a0 formatIdentifier:(id)a1 formatVersion:(id)a2 error:(id *)a3;

@end
