@class NSMutableArray, NSMutableSet;

@interface PhotosFeatureHittingSet : NSObject

@property (retain, nonatomic) NSMutableArray *matchedTokenAttributes;
@property (retain, nonatomic) NSMutableArray *matchedPhotoAttributes;
@property (retain, nonatomic) NSMutableArray *matchedFeaturesAll;
@property (retain, nonatomic) NSMutableSet *hittingSet;

- (void).cxx_destruct;
- (void)computeHitingSet;
- (id)initWithPhoto:(id)a0 query:(id)a1 matchInfo:(id)a2 keyboardLanguage:(id)a3;
- (void)selectBestPhotoAttribute:(id)a0 photoAttributeFrequency:(float *)a1 attributeTokenMatchPercentage:(float *)a2 matchedFeatures:(id)a3;
- (void)setupMatchFeaturesPhoto:(id)a0 query:(id)a1 matchInfo:(id)a2 keyboardLanguage:(id)a3;
- (void)setupMatchedPhotoAttributes:(id)a0 uniqueMatchedFeatureIndexes:(id)a1 tokenMatchType:(unsigned long long)a2 confidences:(id)a3 boundingBoxes:(id)a4 sceneSynonymsCount:(id)a5 keyboardLanguage:(id)a6;

@end
