@interface CRTTMergeableStringRange : NSObject

@property (nonatomic) long long renameGeneration;
@property (nonatomic) long long maxCounter;
@property (readonly, nonatomic) struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char uuid[16]; unsigned int index; } replica; unsigned int clock; } charID; unsigned int length; } range;

- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_objCRenameSequence;
- (id)initWithTopoIDRange:(struct TopoIDRange { struct TopoID { struct TopoReplica { unsigned char x0[16]; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; })a0 renameGeneration:(long long)a1 maxCounter:(long long)a2;
- (id)subrangeFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
