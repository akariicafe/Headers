@interface PKLiveStrokePath : PKStrokePath {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { struct *__value_; } __end_cap_; } _inputPoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; float x9; } *)a0 count:(unsigned long long)a1 immutableCount:(unsigned long long)a2 inputType:(long long)a3 timestamp:(double)a4 UUID:(id)a5 inputPoints:(const void *)a6;
- (id)regenerateStrokeWithInk:(id)a0 randomSeed:(unsigned int)a1 strokeClass:(Class)a2;

@end
