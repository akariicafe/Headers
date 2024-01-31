@class NSArray;

@interface PXUpNextSettings : PXSettings

@property (nonatomic) BOOL forceFallbackMemories;
@property (nonatomic) BOOL enableCustomVectors;
@property (nonatomic) BOOL overrideMemoriesResult;
@property (nonatomic) unsigned long long curationMode;
@property (retain, nonatomic) NSArray *featureWeightVectors;
@property (retain, nonatomic) NSArray *vector0;
@property (nonatomic) float personWeight0;
@property (nonatomic) float sceneWeight0;
@property (nonatomic) float locationWeight0;
@property (nonatomic) float dateWeight0;
@property (nonatomic) float meaningWeight0;
@property (nonatomic) float memoryFeatureWeight0;
@property (nonatomic) float tripWeight0;
@property (retain, nonatomic) NSArray *vector1;
@property (nonatomic) float personWeight1;
@property (nonatomic) float sceneWeight1;
@property (nonatomic) float locationWeight1;
@property (nonatomic) float dateWeight1;
@property (nonatomic) float meaningWeight1;
@property (nonatomic) float memoryFeatureWeight1;
@property (nonatomic) float tripWeight1;
@property (retain, nonatomic) NSArray *vector2;
@property (nonatomic) float personWeight2;
@property (nonatomic) float sceneWeight2;
@property (nonatomic) float locationWeight2;
@property (nonatomic) float dateWeight2;
@property (nonatomic) float meaningWeight2;
@property (nonatomic) float memoryFeatureWeight2;
@property (nonatomic) float tripWeight2;
@property (retain, nonatomic) NSArray *vector3;
@property (nonatomic) float personWeight3;
@property (nonatomic) float sceneWeight3;
@property (nonatomic) float locationWeight3;
@property (nonatomic) float dateWeight3;
@property (nonatomic) float meaningWeight3;
@property (nonatomic) float memoryFeatureWeight3;
@property (nonatomic) float tripWeight3;
@property (retain, nonatomic) NSArray *vector4;
@property (nonatomic) float personWeight4;
@property (nonatomic) float sceneWeight4;
@property (nonatomic) float locationWeight4;
@property (nonatomic) float dateWeight4;
@property (nonatomic) float meaningWeight4;
@property (nonatomic) float memoryFeatureWeight4;
@property (nonatomic) float tripWeight4;

+ (id)sharedInstance;
+ (id)_upNextVectorSliderSections;
+ (id)_enabledCondition;
+ (id)_featureSliderForFeature:(id)a0 valueKeyPath:(id)a1;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setDefaultValues;
- (void)_updateSettingsVectors:(id)a0;
- (id)_mostRelevantFeatureWeightVectors;
- (void).cxx_destruct;
- (id)_weightArrayWithWeightForPerson:(float)a0 scene:(float)a1 location:(float)a2 date:(float)a3 meaning:(float)a4 memoryFeature:(float)a5 trip:(float)a6;
- (id)_varietyFeatureWeightVectors;
- (void)didChangeValueForKey:(id)a0;
- (id)_featureWeightVectorsFromCurationMode:(unsigned long long)a0;

@end
