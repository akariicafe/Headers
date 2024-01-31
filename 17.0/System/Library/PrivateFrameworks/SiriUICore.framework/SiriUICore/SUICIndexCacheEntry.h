@interface SUICIndexCacheEntry : NSObject

@property (nonatomic) unsigned int numAuraIndices;
@property (nonatomic) unsigned int numAuraIndicesCulled;
@property (nonatomic) unsigned int numWaveIndices;
@property (nonatomic) unsigned int *metal_indices;

- (void)dealloc;

@end
