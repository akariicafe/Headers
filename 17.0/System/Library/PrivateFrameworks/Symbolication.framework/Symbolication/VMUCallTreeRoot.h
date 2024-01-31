@class NSString, NSArray, VMUSampler, NSMutableSet, NSMapTable;
@protocol VMUStackLogReader;

@interface VMUCallTreeRoot : VMUCallTreeNode {
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
    id<VMUStackLogReader> _stackLogReader;
    NSArray *_vmRegions;
    unsigned long long _cambriaRuntimeObjectID;
    VMUSampler *_sampler;
    unsigned long long _options;
    NSMutableSet *_uniqueNodeNames;
    NSMapTable *_addressToSymbolNameMap;
    NSMapTable *_addressToLeafSymbolNameMap;
    NSMapTable *_threadPortToNameMap;
    NSArray *_binaryImages;
}

@property (copy, nonatomic) NSString *binaryImagesDescription;

- (void)dealloc;
- (void)setStackLogReader:(id)a0;
- (void).cxx_destruct;
- (id)addBacktrace:(id)a0;
- (id)addBacktrace:(id)a0 count:(unsigned int)a1 numBytes:(unsigned long long)a2;
- (void)addChildCountsIntoNode;
- (id)addChildWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3 toNode:(id)a4;
- (id)addUniqueChildWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3 toNode:(id)a4;
- (id)addUniqueChildWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3 toNode:(id)a4 isLeafNode:(BOOL)a5;
- (void)allBacktracesHaveBeenAdded;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(BOOL)a0;
- (id)descriptionStringForAddress:(unsigned long long)a0 atTime:(unsigned long long)a1 leafFrame:(BOOL)a2 startOfRecursion:(BOOL)a3;
- (id)initWithCallGraphFile:(id)a0 fileHeader:(id *)a1 topFunctionsList:(id *)a2 binaryImagesList:(id *)a3;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 sampler:(id)a1 options:(unsigned long long)a2;
- (void)setCambriaRuntimeVMObjectID:(unsigned long long)a0;
- (void)setVMRegions:(id)a0;

@end
