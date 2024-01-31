@interface _SCNGeometryWrapDeformerParameters_Simple : SCNGeometryWrapDeformerParameters {
    unsigned int _vertexCount;
    struct { void /* unknown type, empty encoding */ columns[4]; } _deformedToDrivingBindingTransform;
    unsigned long long _drivingNodeUVChannel;
    unsigned long long _deformedNodeUVChannel;
    unsigned long long _bindingMode;
    void *_bindingPointIndices;
    unsigned long long _bindingPointIndicesStride;
    unsigned long long _bindingPointIndicesFormat;
    void *_bindingBarycentricCoords;
    unsigned long long _bindingBarycentricCoordsStride;
    unsigned long long _bindingBarycentricCoordsFormat;
    float *_bindingOffsetsOrTransforms;
    unsigned long long _bindingOffsetsOrTransformsLength;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)initParametersIfNeededWithDrivingNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DNode *x1; struct __C3DNode *x2; struct __C3DNode *x3; int x4; struct { union C3DMatrix4x4 { float x0[16]; void /* unknown type, empty encoding */ x1[4]; struct { void /* unknown type, empty encoding */ x0[4]; } x2; } x0; union { } x1; } x5; union C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3b1b1{? { } *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 3; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __C3DGeometry *x39; struct __C3DDeformerStack *x40; float x41; struct { } x42; } *)a0 deformedNodeRef:(struct __C3DNode { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DNode *x1; struct __C3DNode *x2; struct __C3DNode *x3; int x4; struct { union C3DMatrix4x4 { float x0[16]; void /* unknown type, empty encoding */ x1[4]; struct { void /* unknown type, empty encoding */ x0[4]; } x2; } x0; union { } x1; } x5; union C3DMatrix4x4)BfQib1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b3b1b1{? { } *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 1; unsigned char x33 : 1; unsigned char x34 : 3; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __C3DGeometry *x39; struct __C3DDeformerStack *x40; float x41; struct { } x42; } *)a1;
- (id)initWithDrivingNode:(id)a0 deformedNode:(id)a1 bindingMode:(unsigned long long)a2 bindingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 drivingNodeUVChannel:(unsigned long long)a4 deformedNodeUVChannel:(unsigned long long)a5;

@end
