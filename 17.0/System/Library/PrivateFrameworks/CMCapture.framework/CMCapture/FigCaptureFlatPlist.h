@class NSMutableData;

@interface FigCaptureFlatPlist : NSObject {
    NSMutableData *_data;
    struct { void *base; void *offsetTable; unsigned long long nObjects; unsigned long long topObjectOffset; unsigned long long offsetTableStart; unsigned char sortVersion; unsigned char offsetSize; unsigned char referenceSize; } _bplist;
}

+ (id)flatPlistWithContentsOfFile:(id)a0;
+ (id)flatPlistWithContentsOfURL:(id)a0;

- (void)dealloc;
- (const struct { void *x0; void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)bplist;

@end
