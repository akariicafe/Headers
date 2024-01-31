@interface CRFormContentTypeSVMClassifier : NSObject

+ (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_computeFeatureVector:(id)a0 locale:(id)a1 position:(unsigned long long)a2 fieldRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 labelQuad:(id)a4 rank:(int)a5;
+ (id)localeEncoding:(id)a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })_classify:(const void *)a0;
+ (void)addGeometryInformation:(void *)a0 fieldRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 labelQuad:(id)a2;
+ (unsigned long long)predictContentTypeForField:(id)a0 labelRegions:(const void *)a1 locale:(id)a2 keyword:(id *)a3;

@end
