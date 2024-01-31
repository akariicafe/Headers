@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } orderedUuids;
@property unsigned int offset;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToMessage:(void *)a0;
- (id)initFromMessage:(const void *)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 orderedUuids:(const void *)a1 offset:(unsigned int)a2;

@end
