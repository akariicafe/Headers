@class NSString, NSArray;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {
    NSArray *_models;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (void).cxx_destruct;
- (id)predict:(id)a0;
- (id)initWithModels:(id)a0;
- (unsigned long long)outputDimension;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithWeightsArray:(id)a0 andIntercept:(BOOL)a1;

@end
