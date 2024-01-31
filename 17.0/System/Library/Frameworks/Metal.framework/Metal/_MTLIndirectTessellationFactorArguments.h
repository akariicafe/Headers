@interface _MTLIndirectTessellationFactorArguments : NSObject {
    void *_virtualAddress;
}

@property (nonatomic) void *virtualAddress;
@property (nonatomic) unsigned long long GPUVirtualAddress;
@property (nonatomic) unsigned long long instanceStride;
@property (nonatomic) float scale;

@end
