@class NSArray, NSDictionary;

@interface MLFeatureProviderConformer : NSObject

@property (readonly, copy, nonatomic) NSArray *featureDescriptions;
@property (readonly, copy, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) BOOL usingRank5Mapping;
@property (readonly, copy, nonatomic) NSDictionary *optionalInputTypes;

- (void).cxx_destruct;
- (id)_fabricateFeatureForDescription:(id)a0 error:(id *)a1;
- (BOOL)_sequenceConcatConsumesOptionalInputNamed:(id)a0;
- (id)conformFeatures:(id)a0 error:(id *)a1;
- (id)initWithFeatureDescriptions:(id)a0 defaultValues:(id)a1 usingRank5Mapping:(BOOL)a2 optionalInputTypes:(id)a3;

@end
