@class MLMultiArray, NSSet;

@interface CRTextDetectorModelV3Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *region_score;
@property (retain, nonatomic) MLMultiArray *script_feature;
@property (retain, nonatomic) MLMultiArray *script_score;
@property (retain, nonatomic) MLMultiArray *link_score_horizontal;
@property (retain, nonatomic) MLMultiArray *link_score_vertical;
@property (retain, nonatomic) MLMultiArray *table_score;
@property (retain, nonatomic) MLMultiArray *orientation_score;
@property (retain, nonatomic) MLMultiArray *text_type_score;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)shapeExcludingBatch:(id)a0;
+ (id)stridesExcludingBatch:(id)a0;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithRegion_score:(id)a0 script_feature:(id)a1 link_score_horizontal:(id)a2 link_score_vertical:(id)a3 orientation_score:(id)a4 text_type_score:(id)a5 table_score:(id)a6;

@end
