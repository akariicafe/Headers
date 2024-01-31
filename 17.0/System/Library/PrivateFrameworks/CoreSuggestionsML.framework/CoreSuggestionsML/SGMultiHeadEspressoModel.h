@class NSString, NSDictionary;

@interface SGMultiHeadEspressoModel : NSObject {
    struct { void *plan; int network_index; } _espressoModel;
    void *_espressoPlan;
    void *_espressoContext;
    NSString *_inputName;
    unsigned long long _inputNumParameters;
    NSDictionary *_headDimensionality;
}

+ (unsigned long long)getNumParametersFromShape:(unsigned long long[10])a0 rank:(unsigned long long)a1;
+ (id)makeStringForShape:(unsigned long long[10])a0;
+ (id)classifierWithEspressoModelFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)predict:(id)a0;
- (id)headDimensionality;
- (id)initWithEspressoContext:(void *)a0 espressoPlan:(void *)a1 espressoModel:(struct { void *x0; int x1; })a2 inputName:(id)a3 inputNumParameters:(unsigned long long)a4 headDimensionality:(id)a5;
- (unsigned long long)inputNumParameters;
- (id)predict:(id)a0 heads:(id)a1;

@end
