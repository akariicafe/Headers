@class NSNumber, UniImage, NSArray;
@protocol MTLBuffer;

@interface UniRunInfo : NSObject

@property (retain) id<MTLBuffer> indirectBuffer;
@property (weak) UniImage *image;
@property (retain) NSNumber *indirectBufferOffset;
@property (retain) NSArray *threadsPerThreadgroup;
@property (retain) NSArray *threadsPerGrid;
@property (retain) NSArray *threadgroupsPerGrid;
@property (retain) NSArray *extent;

- (id)debugQuickLookObject;
- (id)_init;
- (id)initWithImage:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dispatchOn:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getThreadgroupsPerGrid;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getThreadsPerThreadgroup;
- (id)initWithGridSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 kernel:(id)a1;
- (id)initWithGridSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadGroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)initWithImageDiv2:(id)a0;
- (id)initWithIndirectBuffer:(id)a0 indirectBufferOffset:(unsigned long long)a1 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)initWithThreadgroupsPerGrid:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadGroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outputExtent;
- (void)setCoreImageOutputExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
