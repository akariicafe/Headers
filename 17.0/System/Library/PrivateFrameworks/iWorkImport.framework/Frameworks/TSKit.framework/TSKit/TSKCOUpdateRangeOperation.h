@class NSArray;

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation> {
    struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } _rangeVector;
}

@property (readonly, nonatomic) int transformBehavior;
@property (readonly, nonatomic) BOOL rangeIsEmpty;
@property (readonly, nonatomic) NSArray *rangeValues;
@property (readonly, nonatomic) const void *rangeVector;

+ (int)p_determineTransformBehaviorByPropertyId:(unsigned short)a0;
+ (id)stringForTransformBehavior:(int)a0;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)toString;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 propertyId:(unsigned short)a2;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 propertyId:(unsigned short)a2 noop:(BOOL)a3;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 propertyId:(unsigned short)a2 transformBehavior:(int)a3 noop:(BOOL)a4;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 propertyType:(struct { unsigned short x0; BOOL x1; BOOL x2; unsigned short x3[6]; })a2 transformBehavior:(int)a3 noop:(BOOL)a4;
- (id)initWithAddress:(const void *)a0 rangeVector:(const void *)a1 selectionPropertyId:(unsigned short)a2;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (BOOL)isEqualWithIgnoringEmptyRange:(id)a0;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (id)operationWithNewNoop:(BOOL)a0;

@end
