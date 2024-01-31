@class NSArray, BWInferenceProviderStorage, NSDictionary, NSString, NSMutableDictionary;
@protocol BWInferenceTextureStorage;

@interface BWInferenceSimpleStorage : NSObject <BWInferenceStorage> {
    NSMutableDictionary *_pixelBufferByRequirement;
    NSMutableDictionary *_pixelBufferPoolByRequirement;
}

@property (readonly, nonatomic) BWInferenceProviderStorage *inferenceStorage;
@property (readonly, nonatomic) id<BWInferenceTextureStorage> textureStorage;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBufferPools;
@property (readonly, copy, nonatomic) NSArray *requirementsNeedingPixelBuffers;
@property (retain, nonatomic) NSDictionary *inferenceResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (void)dealloc;
- (void)setPixelBuffer:(struct __CVBuffer { } *)a0 forRequirement:(id)a1;
- (void)setPixelBufferPool:(id)a0 forRequirement:(id)a1;
- (id)pixelBufferPoolForRequirement:(id)a0;
- (struct __CVBuffer { } *)pixelBufferForRequirement:(id)a0;
- (id)initWithRequirementsNeedingPools:(id)a0;

@end
