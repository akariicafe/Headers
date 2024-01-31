@class NSArray, MLModel, NSDictionary, NSString;

@interface SLODLDClassifierV1 : NSObject <SLODLDModelComponent>

@property (retain, nonatomic) MLModel *odldClassifier;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSArray *outputNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfigFile:(id)a0;
- (void)_extractModelSpecs;
- (id)_constructFeatureDictionary:(id)a0 withCtx:(id)a1;
- (float)processEncodedTokens:(id)a0;
- (void)processEncodedTokens:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;

@end
