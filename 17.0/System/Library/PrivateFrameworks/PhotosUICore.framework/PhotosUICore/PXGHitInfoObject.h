@interface PXGHitInfoObject : NSObject {
    struct { unsigned int spriteIndex; double paddedDistance; double unpaddedDistance; struct { struct { double x; double y; double z; } center; void /* unknown type, empty encoding */ size; } geometry; } _hitInfo;
}

@property (readonly, nonatomic) struct { unsigned int x0; double x1; double x2; struct { struct { double x0; double x1; double x2; } x0; } x3; } *hitInfo;

- (id)init;
- (long long)compare:(id)a0;
- (id)initWithHitInfo:(struct { unsigned int x0; double x1; double x2; struct { struct { double x0; double x1; double x2; } x0; } x3; })a0;

@end
