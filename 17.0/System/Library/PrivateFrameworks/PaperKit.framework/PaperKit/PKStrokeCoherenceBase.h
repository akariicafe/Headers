@interface PKStrokeCoherenceBase : PKStroke {
    void /* unknown type, empty encoding */ strokeNode;
    void /* unknown type, empty encoding */ identity;
}

- (id)init;
- (void).cxx_destruct;
- (id)_newStrokeWithSubstrokes:(id)a0 inDrawing:(id)a1;
- (id)initWithData:(id)a0 id:(id)a1 flags:(struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 32; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })a2 ink:(id)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 substrokes:(id)a5;
- (id)initWithInk:(id)a0 strokePath:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 mask:(id)a3;
- (id)initWithInk:(id)a0 strokePath:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 mask:(id)a3 randomSeed:(unsigned int)a4;

@end
