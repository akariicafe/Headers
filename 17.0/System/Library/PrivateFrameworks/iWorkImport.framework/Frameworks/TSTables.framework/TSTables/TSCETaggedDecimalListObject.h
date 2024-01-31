@interface TSCETaggedDecimalListObject : NSObject {
    struct TSCETaggedDecimalList { struct vector<TSCETaggedDecimal, std::allocator<TSCETaggedDecimal>> { struct TSCETaggedDecimal *__begin_; struct TSCETaggedDecimal *__end_; struct __compressed_pair<TSCETaggedDecimal *, std::allocator<TSCETaggedDecimal>> { struct TSCETaggedDecimal *__value_; } __end_cap_; } _list; unsigned long long _startIdx; unsigned long long _size; } _taggedList;
}

+ (id)createFromVector:(const struct TSCEGrid { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; } *)a0 functionSpec:(id)a1 argumentIndex:(int)a2 evaluationContext:(struct TSCEEvaluationContext { } *)a3 ignoreError:(BOOL)a4 ignoreDuplicates:(BOOL)a5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)taggedDecimalList;

@end
