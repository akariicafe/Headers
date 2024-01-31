@class NSData, NSArray;
@protocol MTLBuffer;

@interface SCNGeometryElement : NSObject <NSSecureCoding> {
    struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; unsigned int x1; unsigned int x2; struct __C3DMeshElement *x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { char x0; struct __CFData *x1; unsigned int x2; unsigned int *x3; struct *x4; unsigned short x5; unsigned char x6; BOOL x7; } x7; void *x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource *x13; void /* unknown type, empty encoding */ x14[2]; struct *x15; unsigned int x16; } *_meshElement;
    NSData *_elementData;
    long long _primitiveType;
    long long _primitiveCount;
    NSArray *_primitiveRanges;
    long long _indicesChannelCount;
    BOOL _interleavedIndicesChannels;
    long long _bytesPerIndex;
    float _pointSize;
    float _minimumPointScreenSpaceRadius;
    float _maximumPointScreenSpaceRadius;
    id<MTLBuffer> _mtlBuffer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long primitiveType;
@property (readonly, nonatomic) long long primitiveCount;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } primitiveRange;
@property (readonly, nonatomic) long long bytesPerIndex;
@property (nonatomic) double pointSize;
@property (nonatomic) double minimumPointScreenSpaceRadius;
@property (nonatomic) double maximumPointScreenSpaceRadius;

+ (id)geometryElementWithData:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 bytesPerIndex:(long long)a3;
+ (id)_optimizedGeometryElementWithData:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 bytesPerIndex:(long long)a3;
+ (id)geometryElementWithBuffer:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 bytesPerIndex:(long long)a3;
+ (id)geometryElementWithBuffer:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 indicesChannelCount:(long long)a3 interleavedIndicesChannels:(BOOL)a4 bytesPerIndex:(long long)a5;
+ (id)geometryElementWithData:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 indicesChannelCount:(long long)a3 interleavedIndicesChannels:(BOOL)a4 bytesPerIndex:(long long)a5;
+ (id)geometryElementWithMDLSubmesh:(id)a0;
+ (id)geometryElementWithMeshElementRef:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; unsigned int x1; unsigned int x2; struct __C3DMeshElement *x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { char x0; struct __CFData *x1; unsigned int x2; unsigned int *x3; struct *x4; unsigned short x5; unsigned char x6; BOOL x7; } x7; void *x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource *x13; void /* unknown type, empty encoding */ x14[2]; struct *x15; unsigned int x16; } *)a0;

- (id)init;
- (void)dealloc;
- (id)scene;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexCount;
- (void *)__CFObject;
- (id)primitiveRanges;
- (double)_computeACMR;
- (void)_optimizeTriangleIndices;
- (void)_printData;
- (BOOL)hasInterleavedIndicesChannels;
- (long long)indicesChannelCount;
- (id)initWithBuffer:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 indicesChannelCount:(long long)a3 interleavedIndicesChannels:(BOOL)a4 bytesPerIndex:(long long)a5;
- (id)initWithData:(id)a0 primitiveType:(long long)a1 primitiveCount:(long long)a2 indicesChannelCount:(long long)a3 interleavedIndicesChannels:(BOOL)a4 bytesPerIndex:(long long)a5;
- (id)initWithMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; unsigned int x1; unsigned int x2; struct __C3DMeshElement *x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { char x0; struct __CFData *x1; unsigned int x2; unsigned int *x3; struct *x4; unsigned short x5; unsigned char x6; BOOL x7; } x7; void *x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource *x13; void /* unknown type, empty encoding */ x14[2]; struct *x15; unsigned int x16; } *)a0;
- (struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; unsigned int x1; unsigned int x2; struct __C3DMeshElement *x3; unsigned char x4; unsigned char x5; unsigned char x6; struct { char x0; struct __CFData *x1; unsigned int x2; unsigned int *x3; struct *x4; unsigned short x5; unsigned char x6; BOOL x7; } x7; void *x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource *x13; void /* unknown type, empty encoding */ x14[2]; struct *x15; unsigned int x16; } *)meshElement;
- (struct __C3DScene { } *)sceneRef;
- (void)setPrimitiveRanges:(id)a0;

@end
