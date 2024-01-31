@class NSString, SGModelSource;
@protocol PMLMultiLabelClassifierProtocol, PMLTransformerProtocol;

@interface SGModel : NSObject

@property (readonly) id<PMLMultiLabelClassifierProtocol> model;
@property (readonly) id<PMLTransformerProtocol> featurizer;
@property (readonly) SGModelSource *modelSource;
@property (readonly, copy) NSString *locale;

+ (id)transformerInstanceForLanguage:(id)a0;
+ (id)featurize:(id)a0;
+ (Class)modelClassForObjective:(unsigned long long)a0;
+ (id)newTransformerInstanceForLanguage:(id)a0;
+ (id)trainingFeaturesOf:(id)a0 inLanguage:(id)a1;
+ (id)trainingFeaturesOf:(id)a0 inLanguage:(id)a1 withObjective:(unsigned long long)a2;
+ (id)transformerInstanceForLanguage:(id)a0 withObjective:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0 locale:(id)a1 featurizer:(id)a2 modelSource:(id)a3;
- (id)predictForInput:(id)a0;
- (id)trainingFeaturesOf:(id)a0;

@end
