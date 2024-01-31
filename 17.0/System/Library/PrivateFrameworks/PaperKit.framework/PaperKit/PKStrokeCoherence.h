@class _PKStrokeClipPlane, NSUUID, PKStrokePath, PKStrokeMask, PKInk;

@interface PKStrokeCoherence : PKStrokeCoherenceBase {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ _path;
    void /* unknown type, empty encoding */ resolvedProperties;
    void /* unknown type, empty encoding */ inheritedProperties;
}

@property (nonatomic, copy) PKInk *ink;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } _inkTransform;
@property (nonatomic, copy) PKStrokePath *path;
@property (nonatomic) struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 32; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; } _flags;
@property (nonatomic, copy) NSUUID *_groupID;
@property (nonatomic, copy) NSUUID *_renderGroupID;
@property (nonatomic) long long _shapeType;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, readonly) BOOL hasSubstrokes;
@property (nonatomic, copy) NSUUID *_strokeUUID;
@property (nonatomic, retain) _PKStrokeClipPlane *_clipPlane;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } _transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _bounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderBounds;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(void *)a0;
- (void)_setFlags:(struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 32; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })a0;
- (void)_setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_setStrokeMask:(id)a0;
- (id)copyForMutation;
- (void)_setStrokeUUID:(id)a0;
- (void)_setClipPlane:(id)a0;
- (void)_setGroupID:(id)a0;
- (void)_setRenderGroupID:(id)a0;
- (void)_setShapeType:(long long)a0;
- (id)_substrokesInDrawing:(id)a0;
- (long long)compareToStroke:(id)a0;
- (id)copyForSubstroke;
- (id)initWithInk:(id)a0 strokePath:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 mask:(id)a3;
- (id)parentStrokeForInsertionInDrawing:(id)a0;
- (id)sliceIdentifierForTStart:(double)a0 tEnd:(double)a1;

@end
