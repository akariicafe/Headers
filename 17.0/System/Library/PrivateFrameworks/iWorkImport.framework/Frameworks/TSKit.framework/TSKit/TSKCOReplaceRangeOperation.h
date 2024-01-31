@interface TSKCOReplaceRangeOperation : TSKCOReplaceOperation <TSKCORangeOperation> {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _rangeVector;
}

@property (readonly, nonatomic) unsigned long long insertLength;
@property (readonly, nonatomic) BOOL preserveLowerPriorityLocation;
@property (readonly, nonatomic) const void *rangeVector;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)toString;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 insertLength:(unsigned long long)a2;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 insertLength:(unsigned long long)a2 noop:(BOOL)a3;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 insertLength:(unsigned long long)a2 preserveLowerPriorityLocation:(BOOL)a3 noop:(BOOL)a4;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (BOOL)isEqualWithIgnoringEmptyRange:(id)a0;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (id)operationWithNewNoop:(BOOL)a0;

@end
