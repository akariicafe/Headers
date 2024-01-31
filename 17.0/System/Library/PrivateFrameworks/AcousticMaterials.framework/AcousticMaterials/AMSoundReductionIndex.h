@class NSString, NSNumber, NSArray;

@interface AMSoundReductionIndex : NSObject

@property (readonly) NSString *materialName;
@property (readonly) NSString *materialDescription;
@property (readonly) NSNumber *materialDepth;
@property (readonly) NSNumber *uncertaintyMaterialDepth;
@property (readonly) NSArray *frequencyBands;
@property (copy) NSArray *soundReductionIndexUserData;
@property (readonly) NSArray *soundReductionIndexReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;
@property (readonly) NSNumber *averageSoundReductionIndex;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMaterialName:(id)a0;
- (id)initWithValues:(id)a0 error:(id *)a1;
- (BOOL)validatedWithoutError:(id *)a0;

@end
