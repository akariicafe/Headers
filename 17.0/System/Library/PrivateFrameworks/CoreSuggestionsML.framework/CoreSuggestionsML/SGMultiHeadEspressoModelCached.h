@class NSString, NSDictionary;

@interface SGMultiHeadEspressoModelCached : SGMultiHeadEspressoModel {
    NSString *_espressoModelFile;
    NSString *_inputName;
    NSDictionary *_headDimensionality;
}

+ (id)classifierWithEspressoModelFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;

- (void).cxx_destruct;
- (id)predict:(id)a0;
- (id)headDimensionality;
- (id)initWithEspressoModelFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;
- (unsigned long long)inputNumParameters;
- (id)predict:(id)a0 heads:(id)a1;

@end
