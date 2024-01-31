@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (float)predictFromDictionaryFeatures:(id)a0 error:(id *)a1;
- (float)predict:(id)a0 error:(id *)a1;
- (id)getVersionString;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (float)predictFromValues:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (id)getDescription;
- (id)getInputDescriptionsByName;

@end
