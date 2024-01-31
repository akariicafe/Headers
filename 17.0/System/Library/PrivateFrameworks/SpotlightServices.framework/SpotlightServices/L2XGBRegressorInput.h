@class NSSet;

@interface L2XGBRegressorInput : NSObject <MLFeatureProvider>

@property (nonatomic) double L1Score;
@property (nonatomic) double freshness;
@property (nonatomic) double photosFavorited;
@property (nonatomic) double aestheticScore;
@property (nonatomic) double curationScore;
@property (nonatomic) double matchedFieldsCount;
@property (nonatomic) double matchedPeopleRatio;
@property (nonatomic) double matchedLocationRatio;
@property (nonatomic) double matchedSceneLabelRatio;
@property (nonatomic) double matchedSceneSynonymRatio;
@property (nonatomic) double matchedOCRCharacterMatchRatio;
@property (nonatomic) double matchedSceneConfidence;
@property (nonatomic) double matchedSceneBoundingBox;
@property (nonatomic) double matchedOCRImportance;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithL1Score:(double)a0 freshness:(double)a1 photosFavorited:(double)a2 aestheticScore:(double)a3 curationScore:(double)a4 matchedFieldsCount:(double)a5 matchedPeopleRatio:(double)a6 matchedLocationRatio:(double)a7 matchedSceneLabelRatio:(double)a8 matchedSceneSynonymRatio:(double)a9 matchedOCRCharacterMatchRatio:(double)a10 matchedSceneConfidence:(double)a11 matchedSceneBoundingBox:(double)a12 matchedOCRImportance:(double)a13;

@end
