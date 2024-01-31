@class NSString, NSMutableDictionary;

@interface AMDInputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *inputsDefinitions;
@property (retain, nonatomic) NSString *modelId;

+ (unsigned int)getSizeOfDataType:(long long)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)getGeneralMultiArrayForInput:(id)a0 withDataType:(long long)a1 andShape:(id)a2 withPaddingValue:(id)a3 usingMetadata:(id)a4 andModelAssets:(id)a5 error:(id *)a6;
- (id)getHyperParameterInput:(id)a0 usingMetadata:(id)a1 withInputFeatureDefinition:(id)a2;
- (id)getInputsWithMetadata:(id)a0 andModelAssets:(id)a1 error:(id *)a2;
- (id)getMinimalCToLMapping;
- (id)getModelInput:(id)a0 usingMetadata:(id)a1 andModelAssets:(id)a2 error:(id *)a3;
- (id)getRemapInfoFrom:(id)a0 andModelAssets:(id)a1;
- (id)getSimpleMultiArrayForInput:(id)a0 OfSize:(id)a1 withDataType:(long long)a2 withPaddingValue:(id)a3 usingMetadata:(id)a4 andModelAssets:(id)a5 error:(id *)a6;
- (id)initWithDictionary:(id)a0 andModelId:(id)a1;
- (BOOL)isMatchingShape:(id)a0 with:(id)a1;

@end
