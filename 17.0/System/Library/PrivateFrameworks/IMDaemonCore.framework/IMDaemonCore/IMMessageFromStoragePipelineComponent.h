@class IMDMessageFromStorageController;

@interface IMMessageFromStoragePipelineComponent : IMPipelineComponent {
    unsigned long long _processingType;
    id _broadcaster;
    IMDMessageFromStorageController *_storageController;
}

- (void).cxx_destruct;
- (id)initWithStorageProcessingType:(unsigned long long)a0 storageController:(id)a1 broadcaster:(id)a2;
- (id)runIndividuallyWithInput:(id)a0;

@end
