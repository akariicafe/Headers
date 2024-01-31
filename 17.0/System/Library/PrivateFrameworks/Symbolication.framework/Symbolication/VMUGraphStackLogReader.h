@class VMUDebugTimer, NSSet, NSString, NSData, VMUVMRegionTracker, VMUProcessObjectGraph, VMURangeToStringMap;

@interface VMUGraphStackLogReader : VMUStackLogReaderBase <NSSecureCoding, VMUStackLogReader> {
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIndexTable;
    unsigned long long *_nodeToTimestampTable;
    unsigned long long *_nodeToMSLPayloadTable;
    struct vmu_backtrace_uniquing_table_t { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; int x6; unsigned int x7; unsigned int x8; unsigned int x9; struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } x10; } *_backtraceUniquingTable;
    struct backtrace_uniquing_table { } *_originalUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (retain, nonatomic) NSData *diskLogs;
@property (readonly, nonatomic) unsigned long long maxTimestampDelta;
@property (readonly, nonatomic) unsigned long long mslRecordsCount;
@property (readonly) unsigned int task;
@property (readonly) BOOL is64bit;
@property (readonly) BOOL inspectingLiveProcess;
@property (readonly) BOOL usesLiteMode;
@property (readonly) BOOL usesCoreFile;
@property (readonly) BOOL coldestFrameIsNotThreadId;
@property (readonly) VMUVMRegionTracker *regionTracker;
@property (readonly) struct _CSTypeRef { unsigned long long x0; unsigned long long x1; } symbolicator;
@property (retain, nonatomic) NSSet *excludedFrames;
@property (readonly) unsigned long long nodesInUniquingTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _VMURange { unsigned long long x0; unsigned long long x1; })binaryImageRangeForPCaddress:(unsigned long long)a0;
- (id)functionNameForPCaddress:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)stackIDForNode:(unsigned int)a0;
- (int)enumerateMSLRecordsAndPayloads:(id /* block */)a0;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateUniquingTable:(id /* block */)a0;
- (id)binaryImagePathForPCaddress:(unsigned long long)a0;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)a0;
- (void)symbolicateBacktraceUniquingTable;
- (unsigned long long)timestampForNode:(unsigned int)a0;
- (id)sourceFileNameForPCaddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })functionRangeContainingPCaddress:(unsigned long long)a0;
- (id)initWithCore:(id)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 graph:(id)a2 debugTimer:(id)a3 zones:(struct _VMUZoneNode { unsigned long long x0; id x1; struct malloc_introspection_t *x2; } *)a4 zonesCount:(unsigned int)a5;
- (void)streamFullStackLogsToBlock:(id /* block */)a0;
- (id)vmuVMRegionForAddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })sourceLineRangeContainingPCaddress:(unsigned long long)a0;
- (id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)a0 fullPath:(BOOL)a1;
- (id)sourcePathForPCaddress:(unsigned long long)a0;
- (BOOL)copyOriginalUniquingTable:(id)a0;
- (void).cxx_destruct;
- (void)_setFunctionName:(id)a0 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)getFramesForNode:(unsigned int)a0 inLiteZone:(BOOL)a1 stackFramesBuffer:(unsigned long long *)a2;
- (BOOL)containsTimestampsByNode;
- (BOOL)populateBacktraceUniquingTableWithCore:(id)a0 zones:(struct _VMUZoneNode { unsigned long long x0; id x1; struct malloc_introspection_t *x2; } *)a1 zonesCount:(unsigned int)a2;
- (id)initWithTask:(unsigned int)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1 graph:(id)a2 debugTimer:(id)a3 collectDisklogs:(BOOL)a4;
- (long long)getFramesForStackID:(unsigned long long)a0 stackFramesBuffer:(unsigned long long *)a1;
- (void)_parseSourceInfoString:(id)a0 intoComponents:(unsigned int *)a1;
- (id)initWithCoder:(id)a0;
- (long long)getFramesForAddress:(unsigned long long)a0 size:(unsigned long long)a1 inLiteZone:(BOOL)a2 stackFramesBuffer:(unsigned long long *)a3;
- (void)_setSourcePath:(id)a0 lineNumber:(unsigned int)a1 forPCAddressRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a2;

@end
