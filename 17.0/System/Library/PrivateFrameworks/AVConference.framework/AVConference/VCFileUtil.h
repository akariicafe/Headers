@interface VCFileUtil : NSObject

+ (double)audioContentLengthOfFile:(id)a0;
+ (double)contentLengthOfFile:(id)a0;
+ (unsigned long long)sizeOfFile:(id)a0;
+ (struct tagVCFileStats { unsigned long long x0; double x1; double x2; })statsOfFile:(id)a0;

@end
