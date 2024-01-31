@class NSString, MTLIOAccelHeap, MTLResourceAllocationInfo, MTLIOAccelDevice;
@protocol MTLHeap, MTLDevice;

@interface MTLIOAccelResource : _MTLResource <MTLResourceSPI> {
    struct _MTLIOAccelResource { union { unsigned long long reserved[4]; } vendor; struct IOAccelResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } info; unsigned long long sharedAllocationUniqueId; unsigned long long cachedAllocationUniqueId; unsigned long long gpuAddress; MTLIOAccelDevice<MTLDevice> *device; NSString *label; unsigned long long globalTraceObjectID; unsigned long long labelTraceID; struct __IOAccelResource *resourceRef; struct IOAccelClientSharedRO *clientSharedRO; struct IOAccelClientSharedRW *clientSharedRW; void *virtualAddress; unsigned long long options; unsigned long long storageMode; unsigned long long cpuCacheMode; int responsibleProcess; unsigned long long purgeableState; BOOL purgeableAllowed; MTLResourceAllocationInfo *sharedAllocationInfo; MTLResourceAllocationInfo *cachedAllocationInfo; MTLIOAccelHeap *heap; MTLIOAccelResource *resource; unsigned long long offset; unsigned long long length; BOOL pinned; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } labelLock; } _res;
    MTLIOAccelResource *next;
    MTLIOAccelResource *prev;
    unsigned long long uniqueId;
}

@property (readonly) struct __IOAccelResource { } *resourceRef;
@property (readonly, nonatomic) void *virtualAddress;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned int resourceID;
@property (readonly, nonatomic) unsigned long long resourceSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long gpuHandle;
@property int responsibleProcess;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (struct __CFArray { } *)copyAnnotations;
- (BOOL)isComplete;
- (void)dealloc;
- (id)initWithResource:(id)a0;
- (void)waitUntilComplete;
- (int)setOwnerWithIdentity:(unsigned int)a0;
- (void)makeAliasable;
- (BOOL)isAliasable;
- (void)annotateResource:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)copyAnnotationDictionary:(unsigned long long)a0 obj_key_name:(struct __CFString { } *)a1 obj_dict:(struct __CFDictionary { } *)a2;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (id)initMemoryless:(id)a0 descriptor:(id)a1;
- (id)initStandinWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 options:(unsigned long long)a1 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned long long x6; unsigned long long x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; } x0; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x2; struct { unsigned int x0; unsigned int x1; unsigned long long x2[3]; } x3; } x16; } x0; } *)a2 argsSize:(unsigned int)a3;
- (BOOL)isPurgeable;
- (id)retainedLabel;

@end
