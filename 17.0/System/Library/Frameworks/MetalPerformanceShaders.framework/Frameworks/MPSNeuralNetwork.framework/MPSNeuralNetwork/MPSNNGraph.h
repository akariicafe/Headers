@class NSArray, NSNull, NSObject;
@protocol OS_dispatch_semaphore, MPSHandle, MPSImageAllocator;

@interface MPSNNGraph : MPSKernel <NSCopying, NSSecureCoding> {
    struct Graph { struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _graphSourceImages; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _graphSourceStates; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _graphResultImages; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _graphIntermediateImages; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _graphResultStates; MPSNNGraph *_graph; struct NodeList<FilterGraphNode *> { struct FilterGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _filters; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _images; struct NodeList<ResourceGraphNode *> { struct ResourceGraphNode **_items; unsigned long long _count; unsigned long long _storageSize; } _states; NSObject<OS_dispatch_semaphore> *_cpuUpdateSem; NSNull *_graphNull; } _graph;
    BOOL _resultIsNeeded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sourceImageHandles;
@property (readonly, copy, nonatomic) NSArray *sourceStateHandles;
@property (readonly, copy, nonatomic) NSArray *intermediateImageHandles;
@property (readonly, copy, nonatomic) NSArray *resultStateHandles;
@property (readonly, nonatomic) id<MPSHandle> resultHandle;
@property (nonatomic) BOOL outputStateIsTemporary;
@property (retain, nonatomic) id<MPSImageAllocator> destinationImageAllocator;
@property (nonatomic) unsigned long long format;
@property (readonly, nonatomic) BOOL resultImageIsNeeded;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x44; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x45; } *)libraryInfo:(void *)a0;
+ (id)graphWithDevice:(id)a0 resultImage:(id)a1 resultImageIsNeeded:(BOOL)a2;
+ (id)graphWithDevice:(id)a0 resultImages:(id)a1 resultsAreNeeded:(BOOL *)a2;
+ (id)graphWithDevice:(id)a0 resultImage:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)setOptions:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 intermediateImages:(id)a3 destinationStates:(id)a4;
- (id)initWithDevice:(id)a0 resultImage:(id)a1 resultImageIsNeeded:(BOOL)a2;
- (void)reloadFromDataSources;
- (unsigned long long)readCountForSourceImageAtIndex:(unsigned long long)a0;
- (unsigned long long)readCountForSourceStateAtIndex:(unsigned long long)a0;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1;
- (id)encodeToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 intermediateImages:(id)a3 destinationStates:(id)a4;
- (id)executeAsyncWithSourceImages:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDevice:(id)a0 resultImage:(id)a1;
- (id)initWithDevice:(id)a0 resultImages:(id)a1 resultsAreNeeded:(BOOL *)a2;

@end
