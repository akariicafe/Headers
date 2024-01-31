@class NSMutableDictionary;

@interface BWVideoProcessingInferenceStorage : BWInferenceProviderStorage {
    NSMutableDictionary *_metadataDictionaryForRequirement;
}

- (void)dealloc;
- (id)newMetadataDictionarySatisfyingRequirement:(id)a0;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1;
- (void)setDictionary:(id)a0 forMetadataRequirement:(id)a1;

@end
