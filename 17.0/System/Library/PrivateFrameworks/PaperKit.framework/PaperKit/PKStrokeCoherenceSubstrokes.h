@class PKInk, PKStrokeMask, NSUUID;

@interface PKStrokeCoherenceSubstrokes : PKStrokeCoherenceBase {
    void /* unknown type, empty encoding */ substrokes;
}

@property (nonatomic) BOOL _hidden;
@property (nonatomic, copy) PKInk *ink;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _bounds;
@property (nonatomic) struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 32; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; } _flags;
@property (nonatomic, readonly) BOOL hasSubstrokes;
@property (nonatomic, retain) PKStrokeMask *_strokeMask;
@property (nonatomic, copy) NSUUID *_strokeUUID;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isHidden;
- (void)_setHidden:(BOOL)a0;
- (void)_setFlags:(struct { union { struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 32; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })a0;
- (long long)_pointsCount;
- (void)_setStrokeMask:(id)a0;
- (void)_setStrokeUUID:(id)a0;
- (id)_substrokesInDrawing:(id)a0;
- (id)descriptionAtDepth:(long long)a0;

@end
