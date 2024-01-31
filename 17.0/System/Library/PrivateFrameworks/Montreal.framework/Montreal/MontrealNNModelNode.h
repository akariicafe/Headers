@class NSString, NSArray, NSDictionary, MontrealNNModelQuantization;

@interface MontrealNNModelNode : MontrealNNDescription <MontrealNNDescriptionProtocol>

@property BOOL parametersSet;
@property struct { long long nodeType; long long engineType; long long inputDataType; long long outputDataType; long long weightDataType; long long kernelDataType; long long inputEncoding; long long activations[8]; unsigned long long weightAttributes; int inputDimensions[8][4]; int outputDimensions[4][4]; int integers[16]; float floats[16]; void *weights[16]; void *biases[16]; } parameters;
@property (readonly) NSString *nodeStr;
@property (readonly) NSArray *activations;
@property (readonly) NSString *name;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) NSDictionary *properties;
@property (retain, nonatomic) NSArray *inputs;
@property (retain, nonatomic) NSArray *inputsWithDimensions;
@property (retain, nonatomic) NSArray *outputs;
@property (retain, nonatomic) NSArray *outputsWithDimensions;
@property (readonly) NSArray *weights;
@property (readonly) MontrealNNModelQuantization *quantization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)jsonDescription;
- (BOOL)isEqual:(id)a0;
- (id)auditAndUpdateTensors:(id)a0 dimensionTensors:(id)a1;
- (id)checkForValidity;
- (id)createDataContainer;
- (void)description:(id)a0 indent:(id)a1;
- (void)generateJSONAtPath:(id)a0;
- (id)initWithDictionary:(id)a0 tensors:(id)a1 quantization:(id)a2 jsonDir:(id)a3;
- (id)initWithName:(id)a0 nodeStr:(id)a1 activations:(id)a2 properties:(id)a3 weights:(id)a4;
- (void)keepTensors:(id)a0;
- (struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; })parameters:(void *)a0;

@end
