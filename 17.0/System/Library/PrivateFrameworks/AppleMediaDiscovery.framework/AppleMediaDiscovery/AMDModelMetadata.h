@class NSString, NSMutableDictionary, AMDModelAssetsMetadata, NSNumber;

@interface AMDModelMetadata : NSObject

@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *modelUid;
@property char modelArchType;
@property (retain, nonatomic) NSMutableDictionary *inputsMetadata;
@property (retain, nonatomic) NSMutableDictionary *outputsMetadata;
@property (retain, nonatomic) AMDModelAssetsMetadata *assetsMetadata;
@property (retain, nonatomic) NSNumber *mappingFilesRequired;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)getAssetsMetadata;
- (id)getInputsMetadata;
- (id)getMappingFileRequirement;
- (char)getModelArchType;
- (id)getModelUid;
- (id)getOutputsMetadata;
- (id)initWithMetadataJSON:(id)a0 error:(id *)a1;

@end
