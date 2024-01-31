@interface PTParameterPairSerialization : NSObject

+ (void)appendCMTimeParameter:(unsigned short)a0 value:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 scale:(int)a2 toOutput:(struct **)a3;
+ (void)appendFloatParameter:(unsigned short)a0 value:(float)a1 toOutput:(struct **)a2;
+ (void)appendUIntParameter:(unsigned short)a0 value:(unsigned int)a1 toOutput:(struct **)a2;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })getCMTimeParameter:(unsigned short)a0 scale:(int)a1 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a2 numPairs:(unsigned int)a3 withDefault:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;
+ (float)getFloatParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2;
+ (float)getFloatParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2 didFindValue:(BOOL *)a3;
+ (float)getFloatParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2 withDefault:(float)a3;
+ (unsigned int)getUIntParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2;
+ (unsigned int)getUIntParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2 didFindValue:(BOOL *)a3;
+ (unsigned int)getUIntParameter:(unsigned short)a0 fromPairs:(const struct { unsigned short x0; unsigned short x1; union { float x0; int x1; unsigned int x2; } x2; } *)a1 numPairs:(unsigned int)a2 withDefault:(unsigned int)a3 didFindValue:(BOOL *)a4;

@end
