@class CRContext;

@interface CRTTMergeableStringUndoEditCommand : NSObject

@property (readonly, nonatomic) void *deleteRanges;
@property (readonly, nonatomic) void *insertStrings;
@property (weak, nonatomic) CRContext *context;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)applyToString:(id)a0;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (void)updateInsertTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTemporaryIDs;
- (BOOL)_applyToString:(id)a0;
- (id)renamedWith:(id)a0;
- (void)retainTemporaryIDs;
- (id)temporaryIDs;

@end
