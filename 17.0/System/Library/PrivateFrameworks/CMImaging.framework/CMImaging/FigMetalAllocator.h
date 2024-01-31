@class FigMetalTextureDescriptor, FigMetalBufferDescriptor, NSMutableSet, NSString, FigMetalAllocatorBackend, FigMetalUtils;

@interface FigMetalAllocator : NSObject {
    FigMetalUtils *_utils;
    FigMetalTextureDescriptor *_texDesc;
    FigMetalBufferDescriptor *_bufDesc;
    BOOL _isExternalMemory;
    NSMutableSet *_currentResources;
    FigMetalAllocator *subAllocator[10];
    BOOL _forceDisableCompression;
    BOOL _allowFallBack;
    NSString *_label;
    BOOL _autoUseSubAllocators;
    float _texSizeRatioThreshold;
}

@property (nonatomic) BOOL forceDisableCompression;
@property (readonly, nonatomic) unsigned long long memSize;
@property (readonly, nonatomic) unsigned long long usedSize;
@property (readonly, nonatomic) unsigned long long largestOccupiedOffset;
@property (readonly, nonatomic) int allocatorType;
@property (readonly, nonatomic) unsigned long long resourceOptions;
@property (readonly, nonatomic) int compressionLevel;
@property (readonly, nonatomic) int allocationHint;
@property (readonly, nonatomic) unsigned long long maxContiguousFreeSize;
@property (readonly, nonatomic) FigMetalAllocatorBackend *backendAllocator;

- (void)reset:(unsigned int)a0;
- (void)reset;
- (void)dealloc;
- (id)newTextureWithDescriptor:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)purgeResources;
- (id)newBufferWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 allocatorType:(int)a1;
- (int)setupWithDescriptor:(id)a0;
- (void)purgeResources:(unsigned int)a0;
- (void)forgoOwnership:(id)a0;
- (int)addExternalMetalBuffer:(id)a0 atSubAllocatorID:(unsigned int)a1;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForBufferDescriptor:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })getSizeAndAlignForDescriptor:(id)a0;
- (unsigned long long)largestOccupiedOffset:(unsigned int)a0;
- (void)makeBufferAliasable:(id *)a0;
- (void)makeTextureAliasable:(id *)a0;
- (unsigned long long)memSize:(unsigned int)a0;
- (id)newBufferDescriptor;
- (id)newBufferDescriptor:(unsigned int)a0;
- (id)newBufferWithDescriptor:(id)a0 subAllocatorID:(unsigned int)a1;
- (id)newTextureDescriptor;
- (id)newTextureDescriptor:(unsigned int)a0;
- (id)newTextureWithDescriptor:(id)a0 subAllocatorID:(unsigned int)a1;
- (void)purgeAllSubAllocatorsResources;
- (int)setupWithDescriptor:(id)a0 allocatorBackend:(id)a1;
- (unsigned long long)usedSize:(unsigned int)a0;
- (unsigned long long)usedSizeAll;

@end
