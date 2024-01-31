@class NSArray, BWInferenceSimpleTextureStorage;

@interface BWTiledInferenceStorage : BWInferenceProviderStorage {
    BWInferenceSimpleTextureStorage *_textureStorage;
}

@property (readonly, nonatomic) NSArray *espressoStorages;

- (void)clear;
- (void)dealloc;
- (id)textureStorage;
- (id)initWithRequirementsNeedingPixelBuffers:(id)a0 requirementsNeedingPixelBufferPools:(id)a1 espressoStorages:(id)a2;

@end
