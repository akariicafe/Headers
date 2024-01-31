@class NSString, NSArray;

@interface PPFeaturizerModel : NSObject <MLCustomModel> {
    NSString *_inputName;
    NSString *_outputName;
    NSString *_operation;
    NSArray *_param;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
